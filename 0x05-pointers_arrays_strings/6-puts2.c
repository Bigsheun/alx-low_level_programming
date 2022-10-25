#include "main.h"
/**
* puts2 - prints every other character in string
* @str: string
*
*/
void puts2(char *str)
{
	int i = 0, len = 0;

	while (str[i++] != '\0')
		len++;

	for (i = 0; i < len; i += 2)
		_putchar(*(str + i));
	_putchar('\n');
}
