#include "main.h"

/**
* set_mem - copy same char to memory
* @s: string
* @c: character
* @n: count
* Return: string
*/
char *set_mem(char *s, char c, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = c;
	}
	return (s);
}

/**
* _calloc - allocates memory for an array using malloc
* @nmemb: number of elements
* @size: bytes
* Return: pointer
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mem = malloc(nmemb * size);
	if (mem == NULL)
		return (NULL);

	set_mem(mem, 0, (nmemb * size));

	return (mem);
}
