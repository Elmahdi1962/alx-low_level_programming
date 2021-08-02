#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index of
 * a listint_t linked list.
 *
 * @head: pointer to head
 * @index:  is the index of the node that should be deleted. Index starts at 0
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current = *head, *tmp;
	unsigned int i;

	if (!head || !(*head))
		return (-1);


	if (!index)
	{
		*head = current->next;
		free(current);
		return (1);
	}

	for (i = 0; i < index - 1; i++)
	{
		if (!current)
			return (-1);

		current = current->next;
	}

	tmp = current->next->next;
	free(current->next);
	current->next = tmp;

	return (1);
}
