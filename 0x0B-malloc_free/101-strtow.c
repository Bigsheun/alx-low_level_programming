#include "main.h"
#include <stdlib.h>
/*debug*/
#include <stdio.h>
/*debug*/
/**
* count_words - count number of words
* @str: string
* Return: count
*/
unsigned int count_words(char *str)
{
	unsigned int count, i;

	count = 0;
	/*debug printf("%s\n",str);*/
	while (str[i] != '\0')
	{
		while (str[i] == 32)
			i++;
		/*debug printf("space till %d\n", i);*/
		if (str[i] != '\0')
			count++;
		/*debug printf("count: %d\n",count);*/

		while (str[i] != 32 && str[i] != '\0')
			i++;
		/*debug printf("char till %d\n", i);*/
	}

	return (count);
}
/**
* rollback - free allocate array
* @arr: array
* @size: number of elements to free
*/
void s_rollback(char **arr, int size)
{
	int i;

	for (i = 0; i < size; i++)
		free(arr[i]);
	/*end-for*/

	free(arr);
}

/**
* count_chars - count non-space ('\32') characters
* @s: source string
* Return: number of chars found
*/
int count_chars(char *s)
{
	int count = 0;

	while (*s != 32 && *s != '\0')
	{
		count++;
		s++;
	}

	return (count);
}
/**
* strtow - extract space separated words
* @str: source string
* Return: array of words
*/

char **strtow(char *str)
{
	unsigned int i = 0, len, j, count;
	char **dst;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	count = count_words(str);
	/*debug*/printf("%s\n","str");
	/*allocate array*/
	dst = malloc(sizeof(char *) * (count + 1));
	if (dst == NULL)
		return (NULL);
	
	dst[count] = NULL;

	for (i = 0; i < count; i++)
	{
		while (*str == 32)
			str++;

		len = count_chars(str);
		dst[i] = malloc(sizeof(char) * (len + 1));
		if (dst[i] == NULL)
		{
			s_rollback(dst, count);
			return (NULL);
		}

		for (j = 0; j < len; j++)
			dst[i][j] = str[j];

		dst[i][j] = '\0';

		while (*str != 32 && *str != '\0')
			str++;
	}

	return (dst);
}
