#include "lists.h"

/**
* print_list - prints a list.
* @h: list head
* Return: length of list
*/

size_t print_list(const list_t *h)
{
	size_t len_node;

	len_node = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		len_node++;
	}
	return (len_node);
}
