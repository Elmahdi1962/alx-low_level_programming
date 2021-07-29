#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list.
 *
 * @h: head of the list
 *
 * Return: returns the number of elements in a linked list_t list.
 */

size_t list_len(const list_t *h)
{
	size_t node_count = 0;
	const list_t *tmp = h;

	while (tmp != NULL)
	{
		node_count++;

		tmp = tmp->next;
	}
	return (node_count);
}
