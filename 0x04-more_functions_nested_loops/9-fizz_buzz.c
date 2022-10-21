#include <stdio.h>
/**
* main - c-program entry point
*
* Return: description
*/
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{

		if (i > 1)
			printf(" ");
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			if (i % 3 == 0)
				printf("Fizz");
			if (i % 5 == 0)
				printf("Buzz");
		}
		else
			printf("%d", i);
	} /*next*/
	printf("\n");
	return (0);
}

