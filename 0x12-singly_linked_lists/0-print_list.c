#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list.
 *
 * @h: head of the list
 *
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t node_count = 0;
	const list_t *tmp = h;

	while (tmp != NULL)
	{
		printf("[%d] %s\n", tmp->str != NULL ? tmp->len : 0, tmp->str != NULL ?
		       tmp->str : "(nil)");

		node_count++;

		tmp = tmp->next;
	}
	return (node_count);
}
