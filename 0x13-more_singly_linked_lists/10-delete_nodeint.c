#include "lists.h"
/**
* delete_nodeint_at_index - deletes node at index
* @head: address of list head
* @index: index of node
*
* Return: 1 =>success -1=>failed
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *tmp, *item;

	if (head == NULL)
		return (-1);

	tmp = head[0];
	if (tmp == NULL)
		return (-1);

	for (i = 0; tmp->next != NULL && i < index - 1; i++)
		tmp = tmp->next;

	if (index == 0)
	{
		head[0] = tmp->next;
		free(tmp);
		return (1);
	}

	if (i == index - 1)
	{
		item = tmp->next;
		tmp->next = item->next;
		free(item);
		return (1);
	}
	else
		return (-1);
}