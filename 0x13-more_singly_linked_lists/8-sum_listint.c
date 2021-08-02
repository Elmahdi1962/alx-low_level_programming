#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a listint_t linked list
 *
 * @head: list head
 *
 * Return: if the list is empty, return 0
 */

int sum_listint(listint_t *head)
{
	listint_t *current = head;
	int res = 0;

	if (!head)
		return (0);

	while (current)
	{
		res += current->n;
		current = current->next;
	}

	return (res);
}
