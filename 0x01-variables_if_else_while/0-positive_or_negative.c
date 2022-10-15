#include <stdlib.h>
#include <time.h>
#include <stdio.h>


/**
* main - c-program entry point
*
* Return: always return 0
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d %s\n", n, "is positive");
	if (n == 0)
		printf("%d %s\n", n, "is zero");
	if (n < 0)
		printf("%d %s\n", n, "is negative");
	return (0);
}

