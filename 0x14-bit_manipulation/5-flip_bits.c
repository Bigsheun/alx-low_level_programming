#include "main.h"

/**
 * flip_bits - Counts the number of bits to
 * flip to get from one number to another.
 * @n: First number.
 * @m: Another number
 *
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int  xor, count = 0;

	xor = n ^ m;
	while (xor)
	{
		count += (xor & 1);
		xor >>= 1;
	}

	return (count);
}
