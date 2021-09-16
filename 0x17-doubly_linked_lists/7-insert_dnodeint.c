#include "lists.h"

/**
 * insert_dnodeint_at_index -  inserts a new node at a given position.
 * @h: pointer to head of the list
 * @idx: index where add the node
 * @n: the value to store int he node
 * Return: the address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t)), *cur = *h;
	unsigned int i = 0;

	if (new_node == NULL || *h == NULL)
		return (NULL);
	while (cur != NULL)
	{
		if (i == idx)
		{
			new_node->n = n;
			new_node->next = cur;
			new_node->prev = cur->prev;
			cur->prev->next = new_node;
			cur->prev = new_node;
			return (new_node);
		}
		++i;
		cur = cur->next;
	}
	return (NULL);
}
