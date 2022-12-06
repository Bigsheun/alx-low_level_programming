#include "main.h"

/**
* create_file - creates a file
* @filename: file name.
* @text_content: content to write to file.
*
* Return: 1 if it success. -1 if it fails.
*/
int create_file(const char *filename, char *text_content)
{
	int fd;
	int count;
	int w_count;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (count = 0; text_content[count]; count++)
		;

	w_count = write(fd, text_content, count);

	if (w_count == -1)
		return (-1);

	close(fd);

	return (1);
}
