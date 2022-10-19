#include "main.h"
/**
* print_last_digit - last digit
*
* @n: The int to print
* Return: last digit (no sign)
*/

int print_last_digit(int n)
{
	int last;

	last = n % 10;
	if (last < 0)
		last = last * -1;
	/*end if*/
	_putchar (last + '0');
	return (last);
}

