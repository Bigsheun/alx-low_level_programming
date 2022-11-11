#include "main.h"

/**
* string_nconcat - concatenates two strings.
* @s1: first string
* @s2: second string
* @n: count (second string)
* Return: pointer to concatenation
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *mem;
	unsigned int len1 = 0, len2 = 0, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
	{
		len1++;
	}

	while (s2[len2] != '\0')
	{
		len2++;
	}

	if (n > len2)
	n = len2;
	mem = malloc((len1 + n + 1) * sizeof(char));

	if (mem == NULL)
		return (0);

	for (i = 0; i < len1; i++)
	{
		mem[i] = s1[i];
	}

	for (; i < (len1 + n); i++)
	{
		mem[i] = s2[i - len1];
	}
	mem[i] = '\0';

	return (mem);
}

