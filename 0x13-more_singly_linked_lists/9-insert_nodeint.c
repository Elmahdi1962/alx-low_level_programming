#include "lists.h"

/**
 * insert_nodeint_at_index -  inserts a new node at a given position.
 *
 * @head: pointer to head
 * @idx: is the index of the list where the new node should be added.
 * Index starts at 0
 * @n: value of n that will be stored in the new node
 *
 * Return: the address of the new node, or NULL if it failed
 */


listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current = *head, *tmp, *newNode = malloc(sizeof(listint_t));
	unsigned int i;

	if (!newNode || !(*head) || !head)
		return (NULL);

	newNode->next = NULL;
	newNode->n = n;

	if (idx == 0)
	{
		newNode->next = *head;
		(*head) = newNode;
		return (newNode);
	}


	for (i = 0; i < idx - 1; i++)
	{
		if (!current)
		{
			free(new);
			return (NULL);
		}

		current = current->next;
	}

	newNode->n = n;
	tmp = current->next;
	current->next = newNode;
	newNode->next = tmp;

	return (newNode);
}
