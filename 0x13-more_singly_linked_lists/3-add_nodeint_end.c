#include "lists.h"
/**
* add_nodeint_end - add item @ end of list
* @n: value to add
* @head: pointer to start of list
*
* Return: the address of the new element
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *h;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (head[0] == NULL)
	{
		head[0] = new;
		return (new);
	}

	h = head[0];
	while (h->next != NULL)
		h = h->next;

	h->next = new;

	return (new);
}

