#include "main.h"

/**
* _realloc -  reallocates a memory block using malloc and free
* @ptr: pointer
* @old_size: old size
* @new_size: new size
* Return: pointer
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *tmp, *dst;
	unsigned int i, N;

	if (ptr == NULL)
	{
		dst = malloc(new_size);
		if (dst == NULL)
			return (NULL);
		return (dst);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size == old_size)
		return (ptr);

	dst = malloc(new_size);
	if (dst == NULL)
		return (NULL);


	tmp = ptr;
	N = (new_size > old_size)? old_size : new_size;

	for (i = 0; i < N; i++)
	{
		dst[i] = tmp[i];
	}

	free(ptr);

	return (dst);
}
