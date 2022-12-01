#include "main.h"
/**
* get_bit - program gets the bit at index
* @n: number
* @index: index
*
* Return: 1 or 0 or -1
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int count = 0;
	unsigned long int mask;

	
	for (mask = 1; mask; count++)
		mask <<= 1;
	/*end-for*/

	if(index > count)
		return (-1);
	
	mask = 1;
	mask <<= (index);

	if(n & mask)
		return (1);
	else
		return (0);
	/*end-if*/

}

