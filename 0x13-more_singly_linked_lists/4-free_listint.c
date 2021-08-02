#include "lists.h"

/**
 * free_listint - frees a listint_t list.
 *
 * @head: list head
 *
 * Return: void
 */


void free_listint(listint_t *head)
{
	listint_t *current = head, *next;

	while (current)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
