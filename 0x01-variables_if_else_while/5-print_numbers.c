#include <stdio.h>
/**
* main - c-program entry point
*
* Return: 0 SUCCESS
*/
int main(void)
{
	char alpha;

	for (alpha = 48; alpha < 48 + 10; alpha++)
		putchar(alpha);
	putchar('\n');
	return (0);
}

