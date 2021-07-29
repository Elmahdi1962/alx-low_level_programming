#include "lists.h"
#include "_strlen.c"



/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: pointer to a pointer to the head of the list
 * @str: value of the new node
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *tmp = (list_t *)malloc(sizeof(list_t));
	char *string = strdup(str);

	if (tmp == NULL || string == NULL)
	{
		free(tmp);
		return (NULL);
	}

	tmp->next = *head;
	tmp->str = string;
	tmp->len = _strlen(string);
	*head = tmp;

	return (tmp);
}
