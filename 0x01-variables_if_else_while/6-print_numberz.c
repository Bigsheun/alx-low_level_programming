#include <stdio.h>
/**
* main - c-program entry point
*
* Return: 0 SUCCESS
*/
int main(void)
{
	int i;

	for (i = 48; i < 48 + 10; i++)
		putchar(i);
	putchar('\n');
	return (0);
}

