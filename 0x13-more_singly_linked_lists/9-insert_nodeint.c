#include "lists.h"
/**
* insert_nodeint_at_index - insert item a@ idx
* @head: address of list head
* @idx: index idx
* @n: value to insert
*
* Return: new node address
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *tmp, *new;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	tmp = head[0];
	if (tmp == NULL)
	{
		head[0] = new;
		return (new);
	}

	for (i = 0; tmp->next != NULL && i < idx - 1; i++)
		tmp = tmp->next;

	if (i == idx - 1)
	{
		new->next = tmp->next;
		tmp->next = new;
		return (new);
	}
	else
		return (NULL);
}
