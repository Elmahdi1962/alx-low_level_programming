#include "lists.h"


/**
 * free_listint_safe -  frees a listint_t list.
 *
 * @h: pointer to head
 *
 * Return:  the size of the list that was free’d
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *current = *h, *loopNode = find_listint_loop_h(*h);
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
