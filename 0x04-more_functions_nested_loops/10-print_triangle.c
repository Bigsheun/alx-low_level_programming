#include "main.h"
/**
* print_triangle - draw traingle
* @size: size of triangle
*
*/
void print_triangle(int size)
{
	int i, j;
	if (size <= 0)
		_putchar('\n');
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
			if (i + j >= size - 1)
				_putchar('#');
			else
				_putchar(' ');
		_putchar('\n');
	}
}

