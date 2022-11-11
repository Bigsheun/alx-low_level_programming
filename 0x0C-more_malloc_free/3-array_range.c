#include "main.h"

/**
* array_range - creates an array of consecutive integers
* @min: min
* @max: max
* Return: array
*/

int *array_range(int min, int max)
{
	int *array, i = 0, n = min, R;

	if (min > max)
		return (NULL);

	array = malloc((max - min + 1) * sizeof(int));
	if (!array)
		return (NULL);

	R = max - min;
	while (i <= R)
		array[i++] = n++;

	return (array);
}
