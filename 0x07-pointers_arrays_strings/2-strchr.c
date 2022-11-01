#include <stdlib.h>
/**
* _strchr - find c in s
* @s: the string
* @c: character
*
* Return: pointer
*/
char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (s[i] != c && s[i] != '\0')
		++i;
	if (s[i] == '\0')
		return (NULL);
	return (s + i);

}
