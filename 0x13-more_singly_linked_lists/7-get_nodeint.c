#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 *
 * @head: list head
 * @index: is the index of the node, starting at 0
 *
 * Return: if the node does not exist, return NULL
 *  returns the nth node of a listint_t linked list.
 */


listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	unsigned int i;

	for (i = 0; i < index; i++)
	{
		if (!current)
			return (NULL);

		current = current->next;
	}

	if (!current)
		return (NULL);
	return (current);
}
