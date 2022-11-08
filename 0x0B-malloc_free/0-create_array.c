#include "main.h"
#include <stdlib.h>

/**
* create_array - allocates and fills memory
* @size: allocation size
* @c: values to fill
* Return: the memory if successfull
*/

char *create_array(unsigned int size, char c)
{
	char *dst;
	unsigned int i;

	if (size == 0)
		return (NULL);

	dst = malloc(sizeof(char) * (size));
	if (dst == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		dst[i] = c;

	return (dst);
}
