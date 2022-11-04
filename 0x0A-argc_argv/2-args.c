#include <stdio.h>
/**
* main - c-program entry point
* @argc: command-line count
* @argv: array of command-line strings
*
* Return: success (0)
*/

int main(int argc, char const *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i])	;

	return 0;
}
