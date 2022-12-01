#include "main.h"

/**
* print_binary - prints the binary equivalent of number
* @n: number
*/
void print_binary(unsigned long int n)
{
	int count = 0;
	unsigned long int mask = 1;

	
	for (mask = n; mask; mask >>= 1)
		count++;
	/*end-for*/

	mask = 1;
	mask <<= (count-1);

	while (mask)
	{
		if (n & mask)
			_putchar('1');
		else
			_putchar('0');
		/*end-if*/
		mask >>= 1;
			
	}
}
