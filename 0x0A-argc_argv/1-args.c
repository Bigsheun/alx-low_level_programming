#include <stdio.h>
/**
* main - c-program entry point
* @argc: command-line count
* @argv: array of command-line strings
*
* Return: always 0
*/
int main(int argc, __attribute__((unused)) char const *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
