#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list.
 *
 * @h: head of the list
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *current = h;

	register size_t ncount = 0;

	while (current)
	{
		printf("%i\n", current->n);
		ncount++;
		current = current->next;
	}

	return (ncount);
}
