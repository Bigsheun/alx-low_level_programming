#include "main.h"
/**
* print_number - prints an integer
* @n: number
*/
void print_number(int n)
{
	unsigned m;

	

	if (n < 0)
	{	
		_putchar('-');
		m = -n;
		
	}
	else
		m = n;
	/*end-if*/
	if (m / 10 > 0)
		print_number(m / 10);
	/*end-if*/
	_putchar(m % 10 + '0');
}
