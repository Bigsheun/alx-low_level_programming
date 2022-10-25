#include "main.h"
/**
* print_rev - prints a string in reverse
* @s: String to print
*
*/
void print_rev(char *s)
{
	int i = 0, len = 0;

	while (s[i++] != '\0')
		len++;

	for (i = len - 1; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
