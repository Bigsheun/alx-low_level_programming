#include "main.h"
/**
* print_diagonal - c-program entry point
* @n: command-line count
*
* Return: description
*/
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');
	for (i = 0; i < n; ++i)
	{
		for (j = 0; j < i; ++j)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}

}

