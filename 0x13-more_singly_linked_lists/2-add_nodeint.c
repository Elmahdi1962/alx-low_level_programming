#include "lists.h"

/**
 * add_nodeint -  adds a new node at the beginning of a listint_t list.
 *
 * @head: pointer to head
 * @n: value of n in the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));

	if (!newNode)
	{
		free(newNode);
		return (NULL);
	}

	newNode->n = n;
	newNode->next = *head;
	*head = newNode;

	return (newNode);
}
