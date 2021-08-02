#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list.
 *
 * @head: pointer to head
 *
 * Return: a pointer to the first node of the reversed list
 */


listint_t *reverse_listint(listint_t **head)
{
	listint_t *current = (*head)->next, *next = 0;

	if (!current)
		return (*head);

	(*head)->next = NULL;
	while (current)
	{
		next = current->next;
		current->next = (*head);
		(*head) = current;
		current = next;
	}
	return (current);
}
