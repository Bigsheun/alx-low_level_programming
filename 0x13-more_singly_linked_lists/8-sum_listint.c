#include "lists.h"
/**
* sum_listint - add up content of list
* @head: list head
*
* Return: sum
*/
int sum_listint(listint_t *head)
{
	size_t count = 0;
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
		count++;
	}

	return (sum);
}
