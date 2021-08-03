#include "lists.h"


/**
 * find_listint_loop - finds a loop in a linked list
 *
 * @head: linked list to search
 *
 * Return: address of node where loop starts/returns, NULL if no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *ptr, *end;

	if (head == NULL)
		return (NULL);

	for (end = head->next; end != NULL; end = end->next)
	{
		if (end == end->next)
			return (end);
		for (ptr = head; ptr != end; ptr = ptr->next)
			if (ptr == end->next)
				return (end->next);
	}
	return (NULL);
}


/**
 * free_listint_safe -  frees a listint_t list.
 *
 * @h: pointer to head
 *
 * Return:  the size of the list that was free’d
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *current = *h, loopNode = find_listint_loop(*h);
	size_t nodeCount = 0;
	int loop = 1;

	if (!h || !(*h))
		return (0);

	for (nodeCount = 0; (*h != loopNode || loop) && *h != NULL;
	     *h = current)
	{
		nodeCount++;
		current = (*h)->next;
		if (*h == loopNode && loop)
		{
			if (loopNode == loopNode->next)
			{
				free(*h);
				break;
			}
			nodeCount++;
			current = current->next;
			free((*h)->next);
			loop = 0;
		}
		free(*h);
	}
	*h = NULL;
	return (nodeCount);
}
