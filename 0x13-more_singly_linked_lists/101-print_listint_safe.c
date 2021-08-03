#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list.
 *
 * @head: linkedlist head
 *
 * Return:  number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	int diff;

	register int nodeCount = 0;


	if (!head)
		exit(98);

	while (head)
	{
		diff = head - head->next;
		nodeCount++;
		printf("[%p] %i\n", (void *)head, head->n);
		if (diff > 0)
			head = head->next;
		else
		{
			printf("-> [%p] %i\n", (void *)head->next,
			       head->next->n);
			break;
		}

	}
	return (nodeCount);
}
