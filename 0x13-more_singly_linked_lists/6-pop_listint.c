#include "lists.h"
/**
* pop_listint - removes first item on the list/retrieves content
* @head: address of head
*
* Return: content
*/

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int ret;

	if (head[0] == NULL)
		return (0);

	tmp = head[0];
	ret = tmp->n;
	head[0] = tmp->next;
	free(tmp);

	return (ret);
}
