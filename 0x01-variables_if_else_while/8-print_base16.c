#include <stdio.h>
/**
* main - c-program entry point
*
* Return: 0 SUCCESS
*/
int main(void)
{
	char alpha;

	for (alpha = 48; alpha < 58; alpha++)
		putchar(alpha);
	for (alpha = 97; alpha < 103; alpha++)
		putchar(alpha);
	putchar('\n');
	return (0);
}

