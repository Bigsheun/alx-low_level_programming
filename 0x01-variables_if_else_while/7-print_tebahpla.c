#include <stdio.h>
/**
* main - c-program entry point
*
* Return: 0 SUCCESS
*/
int main(void)
{
	char alpha;

	for (alpha = 97 + 25; alpha >= 97 ; alpha--)
		putchar(alpha);
	putchar('\n');
	return (0);
}

