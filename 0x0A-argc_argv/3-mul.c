#include <stdio.h>
#include <stdlib.h>
/**
* main - c-program entry point
* @argc: command-line count
* @argv: array of command-line strings
*
* Return: 0 on succes else 1
*/

int main(int argc, char const *argv[])
{
	int a, b;

	if (argc < 3 || argc > 3)
	{
		printf("%s\n", "Error");
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);

	printf("%d\n", a * b);

	return (0);
}
