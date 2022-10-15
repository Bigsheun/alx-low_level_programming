#include <stdio.h>
/**
* main - c-program entry point
*
* Return: 0 SUCCESS
*/
int main(void)
{
	char alpha;

	for (alpha = 6 * 16 + 1; alpha < 6 * 16 + 27; alpha++)
		putchar(alpha);
	putchar('\n');
	return (0);
}

