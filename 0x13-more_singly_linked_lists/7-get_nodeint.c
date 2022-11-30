#include "lists.h"
/**
* get_nodeint_at_index - return nth node
* @index: index of node
* @head: list head
*
* Return: node address
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);


	for (i = 0; head->next != NULL && i < index; i++)
		head = head->next;

	if (i == index)
		return (head);
	else
		return (NULL);

}
