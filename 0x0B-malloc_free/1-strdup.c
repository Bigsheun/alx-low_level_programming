#include <stdlib.h>
/**
* _strdup - creates duplicate of a string
* @str: original string
*
* Return: pointer to the duplicate
*/
char *_strdup(char *str)
{
	char *dst;
	int i, N;

	if (str == NULL)
		return (NULL);

	/*Find the length of the string*/
	N = 0;
	for (i = 0; str[i] != '\0'; i++)
		N += 1;

	/*Allocate space for the destination*/
	dst = malloc(sizeof(char) * (N + 1));
	if (dst == NULL)
		return (NULL);

	/*copy string to destination*/
	for (i = 0; i < N; i++)
		dst[i] = str[i];

	dst[i] = '\0';
	return (dst);
}
