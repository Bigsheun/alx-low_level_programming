#include "main.h"
#include <stdio.h>

/**
* report_file_error - reports input/output file errors and die.
* @file_from: input file descriptor.
* @file_to: output file descriptor.
* @argv: file name arrays.
*/
void report_file_error(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
* main - Program copies one file to another.
* @argc: number of arguments.
* @argv: arguments.
* Return: Always 0 (success).
*/
int main(int argc, char *argv[])
{
	int file_from, file_to;
	ssize_t r_count = 1024, w_count;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	report_file_error(file_from, file_to, argv);

	while (r_count == 1024)
	{
		r_count = read(file_from, buf, 1024);
		if (r_count == -1)
			report_file_error(-1, 0, argv);
		w_count = write(file_to, buf, r_count);
		if (w_count == -1)
			report_file_error(0, -1, argv);
	}

	if (close(file_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}

	if (close(file_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	return (0);
}

