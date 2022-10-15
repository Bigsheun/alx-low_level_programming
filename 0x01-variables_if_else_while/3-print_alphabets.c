#include <stdio.h>
/**
* main - c-program entry point
*
* Return: 0 SUCCESS
*/
int main(void)
{
	char alpha;

	for (alpha = 97; alpha < 97 + 26; alpha++)
		putchar(alpha);
	for (alpha = 65; alpha < 65 + 26; alpha++)
		putchar(alpha);
	putchar('\n');

	return (0);
}

