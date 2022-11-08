#include <stdlib.h>
/**
* str_concat - function to concatenate 2 strings
* @s1: First string
* @s2: second string
*
* Return: new allocation/concatenation
*/

char *str_concat(char *s1, char *s2)
{
	char *dst;
	unsigned int L1, L2;
	unsigned int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/*Length of both strings*/
	for (L1 = 0; s1[L1] != '\0' ; L1++)
		j  =  0;
	for (L2 = 0; s2[L2] != '\0' ; L2++)
		j  =  0;

	dst = malloc(sizeof(char) * (L1 + L2 + 1));
	if (dst == NULL)
		return (NULL);

	for (i = 0; i < L1; i++)
		dst[i] = s1[i];
	for (j = 0; j < L2; j++)
		dst[i + j] = s2[j];

	dst[i + j] = '\0';

	return (dst);
}
