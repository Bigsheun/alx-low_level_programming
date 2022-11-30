#include "lists.h"
/**
* free_listint2 - frees list and sets to NULL
* @head: pointer to head
*/
void free_listint2(listint_t **head)
{
	listint_t *tmp, *h;

	if (head == NULL)
		return;

	h = head[0];
	if (h == NULL)
	{
		head[0] = NULL;
		return;
	}

	while (h->next != NULL)
	{
		tmp = h;
		h = h->next;
		free(tmp);
	}

	free(h);
	head[0] = NULL;
}
