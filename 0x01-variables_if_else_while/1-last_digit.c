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
	int n, last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;
	if (last_digit > 5)
		printf("Last digit of %d is %d %s\n",
		       n, last_digit, "and is greater than 5");
	if (last_digit == 0)
		printf("Last digit of %d is %d %s\n", n, last_digit, "and is 0");
	if (last_digit < 6 && last_digit != 0)
		printf("Last digit of %d is %d %s\n",
		       n, last_digit, "and is less than 6 and not 0");
	return (0);
}


