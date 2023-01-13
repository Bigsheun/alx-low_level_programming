#include "lists.h"

/**
* add_dnodeint_end - adds new node to end of dlist
* @head: address of head node
* @n: int value for new node
*
* Return: address of new node or NULL
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t)), *node;

	if (head == NULL || new == NULL)
	{
		if (new != NULL)
		{
			free(new);
		}
		return (NULL);
	}

	new->n = n;
	new->next = NULL;
	if (head[0] == NULL)
	{
		new->prev = NULL;
		head[0] = new;
	}
	else
	{
		node = head[0];
		while (node->next)
			node = node->next;

		node->next = new;
		new->prev = node;
	}
	return (new);
}
