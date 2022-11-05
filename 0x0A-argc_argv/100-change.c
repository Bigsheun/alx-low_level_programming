#include <stdio.h>
#include <stdlib.h>

/**
 * main - function
 *@argc: length of argv
 *@argv: number of argument
 *Return: Always 0
 */

int main(int argc, char *argv[])
{

	int index, total, change, c_count;
	int coins[] = {25, 10, 5, 2, 1};


	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	total = atoi(argv[1]);
	if (total <= 0)
	{
		printf("0\n");
		return (0);
	}

	change = 0;
	for (index = 0; index < 5; index++)
	{
		if (total >= coins[index])
		{
			c_count = (total / coins[index]);
			change += c_count;
			total -= coins[index] * c_count;
		}
	}

	printf("%d\n", change);
	return (0);
}
