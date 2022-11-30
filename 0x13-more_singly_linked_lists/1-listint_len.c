#include "lists.h"
#include <stdlib.h>
/**
* listint_len - finds the length of  a list
* @h: list head
*
* Return: length
*/
size_t listint_len(const listint_t *h)
{
	size_t count;

	for (count = 0; h != NULL; count++)
		h = h->next;

	return (count);
}

