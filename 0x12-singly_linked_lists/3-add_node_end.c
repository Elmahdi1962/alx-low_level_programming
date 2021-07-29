#include "lists.h"
#include "_strlen.c"
/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: list head
 * @str: string value will be stored in str var of the struct node
 * Return: the address of the new node or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = (list_t *)malloc(sizeof(list_t)), *tmp = *head;
	char *string = strdup(str);

	if (new_node == NULL || string == NULL)
	{
		free(new_node);
		return (NULL);
	}

	while (tmp && tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	new_node->str = string;
	new_node->len = _strlen(string);
	new_node->next = NULL;

	if (tmp)
		tmp->next = new_node;
	else
		*head = new_node;

	return (new_node);
}
