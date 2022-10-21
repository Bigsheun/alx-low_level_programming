#include "main.h"
/**
* _isupper - checks if character is uppercase
* @c: character
*
* Return: 0: false 1: true
*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

