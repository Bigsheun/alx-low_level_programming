#include "main.h"
#include <stdio.h>

/**
* print_diagsums - prints the sum of diagonals of a square matrix
* @a: 2D array of integers
* @size: matrix size
 */

void print_diagsums(int *a, int size)
{
	int i;
	int sum1, sum2;

	sum1 = 0;
	sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 = sum1 + a[i * size + i];
		sum2 = sum2 + a[i * size + size - 1 - i];
	}

	printf("%i, %i\n", sum1, sum2);
}
