#include "lists.h"
/**
* free_listint - frees up memory used by list
* @head: list head
*
*/
void free_listint(listint_t *head)
{
	listint_t *tmp;

	if (head == NULL)
		return;

	while (head->next != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}

	free(head);
}
