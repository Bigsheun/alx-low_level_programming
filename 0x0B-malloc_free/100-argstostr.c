#include <stdlib.h>

/**
* s_cat_nl - concatenate src and new line to dst
* @dst: dst
* @src: src
*
* Return: new starting point
*/
unsigned int s_cat_nl(char *dst, char *src, unsigned int start)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dst[start + i] = src[i];
		++i;
	}

	dst[start + i] = '\n';

	return (start + i + 1);
}

/**
* s_len - compute string length
* @s: string
*
* Return: length
*/
unsigned int s_len(char *s)
{
	unsigned int i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}

/**
* argstostr - converts arguments to string
* @ac: argument count
* @av: array of argument strings
*
* Return: output string
*/
char *argstostr(int ac, char **av)
{
	unsigned int i, len = 0, start = 0, _ac;
	char *dst;

	_ac = ac;
	if (_ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < _ac; i++)
		len += s_len(av[i]) + 1;

	dst = malloc(sizeof(char) * (len + 1));
	if (dst == NULL)
		return (NULL);

	for (i = 0; i < _ac; i++)
		start = s_cat_nl(dst, av[i], start);

	dst[start] = '\0';
	return (dst);
}
