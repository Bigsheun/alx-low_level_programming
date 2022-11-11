#include <stdlib.h>

/**
* malloc_checked - malloc that checks for fail
* @b: size_t
*
* Return: allocated pointer
*/

void *malloc_checked(unsigned int b)
{
	void *mem;

	mem = malloc(b);
	if (mem == NULL)
		exit(98);
	return (mem);
}

