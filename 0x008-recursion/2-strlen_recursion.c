#include "main.h"
/**
* _strlen_recursion - recursively find lenth of string
* @s: String in question
* Return: Length of string (no-of-chars)
*/
int _strlen_recursion(char *s)
{
	if (s[0] == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
	/*end if*/
}
