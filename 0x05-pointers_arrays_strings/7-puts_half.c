#include "main.h"
/**
* _strlen - like strlen
* @s: string
*
* Return: length
*/
int _strlen(char *s)
{
	int len = 0;

	while ('\0' != *(s++))
		++len;
	return (len);
}

/**
* puts_half - print the second half of a string
* @str: the string
*
*/
void puts_half(char *str)
{
	int i, start, len = 0;

	len = _strlen(str);
	start = len / 2 + len % 2;
	i = 0;
	while (*(str + start + i) != '\0')
	{
		_putchar(*(str + start + i));
		i++;
	}
	_putchar('\n');
}

