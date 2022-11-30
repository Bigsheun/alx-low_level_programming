#include "lists.h"
/**
* add_nodeint - Adds a node to the list
* @head: address of the head of list
* @n: value to add
*
* Return: returns the original list with a new head
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = head[0];
	head[0] = new;

	return (new);
}
