#include "lists.h"
#include <stdlib.h>

/**
* print_listint - function to print a list of integers
* @h: pointer to list head
*
* Return: size of the printed list
*/

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		_print_num(h->n);
		_putchar('\n');
		h = h->next;
		count++;
	}

	return (count);
}
