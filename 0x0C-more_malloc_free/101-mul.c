#include "main.h"
#include <stdlib.h>

/**
* c_atoi - convert a char to integer.
* @c: character to convert.
* Return: integer.
**/

int c_atoi(char c)
{
	if (c <= '9' && c >= '0')
		return (c - '0');
	return (-1);
}

/**
 * is_number - Determine if a string is a number.
 * @num_str: Pointer to string.
 * Return: success (0).
 **/
int is_number(char *num_str)
{
	int i;

	for (i = 0; num_str[i] != '\0'; i++)
		if (num_str[i] < '\0' || num_str[i] > '9')
			return (1);
	return (0);
}

/**
 *_calloc - allocate array of size * nmemb.
 * @nmemb: number of elements.
 * @size: size of element.
 * Return: pointer to array.
 **/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *tab;
	unsigned int i;

	tab = malloc(size * nmemb);

	if (tab == NULL)
		return (NULL);

	for (i = 0; i < (size * nmemb); i++)
		tab[i] = '0';

	return (tab);
}

/**
* mul_array - multiply two arrays.
* @a1: first array.
* @len1: length of array a1.
* @a2:  char.
* @a3: array for result.
* @lena: length of array a3.
* Return: pointer to array.
**/

void *mul_array(char *a1, int len1, char a2, char *a3, int lena)
{
	int mul = 0, i, k;

	k = lena;
	for (i = len1 - 1; i >= 0 ; i--)
	{
		mul += (a1[i] - '0') * (a2 - '0') + (a3[k] - '0');
		a3[k] = (mul % 10) + '0';
		mul /= 10;
		k--;
	}

		while (mul != 0)
		{
			mul += a3[k] - '0';
			a3[k] = (mul % 10) + '0';
			mul /= 10;
			k--;
		}

	return (a3);
}
/**
* print_array - print all digits of array.
* @nb: number of elements to print.
* @a: array of elements.
**/
void print_array(char *a, int nb)
{
	int i = 0;

	while (a[i] == '0' && (i + 1) < nb)
	{
		i++;
	}
	for (; i < nb; i++)
	{
		_putchar(a[i]);
	}
	_putchar('\n');
}

/**
*main - print the multiplication of 2 numbers.
*@argc: array length.
*@argv: array.
*Return: 0.
*/

int main(int argc, char *argv[])
{
	int i, c, len1, len2, lenres;
	char E[6] = {'E', 'r', 'r', 'o', 'r', '\n'};
	char *tabres;

	if (argc != 3 || is_number(argv[1]) == 1 || is_number(argv[2]) == 1)
	{
		for (i = 0; i < 6; i++)
		{
			_putchar(E[i]);
		}
		exit(98);
	}
	for (len1 = 0; argv[1][len1]; len1++)
	;
	for (len2 = 0; argv[2][len2]; len2++)
	;
	lenres = len1 + len2;
	tabres = _calloc(lenres, sizeof(int));
	if (tabres == NULL)
	{
		free(tabres);
		return (0);
	}
	for (i = len2 - 1, c = 0; i >= 0; i--)
	{
	tabres = mul_array(argv[1], len1, argv[2][i], tabres, (lenres - 1 - c));
	c++;
	}
	print_array(tabres, lenres);
	free(tabres);
	exit(EXIT_SUCCESS);
	return (0);
}

