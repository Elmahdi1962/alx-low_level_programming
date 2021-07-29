#include "lists.h"

/**
 * free_list - frees a list_t list
 *
 * @head: head to the list
 *
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *current = head;
	list_t *next;

	while (current)
	{
		next = current->next;
		free(current->str);
		free(current);
		current = next;
	}
}
