#include "main.h"

/**
* print_sign - prints/returns the sign of a number
* @n: number
*
* Return: -1=>negative, 1=>positive and 0 for 0
*/

int print_sign(int n)
{

	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
	return (test);
}

