#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 *
 * @head: pointer to head
 * @n: value will be storen in n variable of the new node struct
 *
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode = malloc(sizeof(listint_t)), *current = *head;

	if (!newNode)
	{
		free(newNode);
		return (NULL);
	}

	newNode->n = n;
	newNode->next = NULL;


	if (!head || !(*head))
	{
		*head = newNode;
		return (newNode);
	}


	while (current)
	{
		if (current->next == NULL)
			break;
		current = current->next;
	}

	current->next = newNode;

	return (newNode);
}
