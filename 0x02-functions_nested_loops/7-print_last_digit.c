#include "main.h"

/**
 * print_last - last digit
 *
 * @n: The int to print
 * Return: Always 0.
 */

int print_last(int n)

{
	int last;

	if (n < 0)
		n = n * -1;
	/*end if*/
	last = (n % 10);
	_putchar (last + '0');
	return (last);
}

