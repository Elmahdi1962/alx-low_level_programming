#include "search_algos.h"
#include <math.h>

/**
 * jump_list -  searches for a value in a sorted list of integers
 * using the Jump search algorithm.
 * @list: pointer to the head of the list to search in
 * @size: number of nodes in list
 * @value: the value to search for
 * Return: pointer to the first node where value is located
 * assuming that list will be sorted in ascending order
 * If value is not present in head or if head is NULL,
 * function will return NULL
 */

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	int step = 0, flag = 0, prev = 0, i = 0;
	listint_t *tmp = list;

	if (list == NULL)
		return (NULL);

	while (step < (int)size && tmp->n < value)
	{
		prev = step;
		step += (int)(sqrt(size));
		if (step >= (int)size)
		{
			flag = 1;
			step = (int)size - 1;
		}
		for (i = tmp->index; i < step; i++)
			tmp = tmp->next;
		printf("Value checked array[%i] = [%i]\n", step, tmp->n);
		if (prev >= (int)size)
			return (NULL);
		if (flag == 1)
			break;
	}
	printf("Value found between indexes [%i] and [%i]\n", prev, step);
	if (step > (int)(size - 1))
		step = (int)size - 1;
	tmp = list;
	for (i = tmp->index; i < prev; i++)
		tmp = tmp->next;
	for (i = prev; i <= step && tmp->n <= value; i++)
	{
		printf("Value checked array[%i] = [%i]\n", i, tmp->n);
		if (tmp->n == value)
			return (tmp);
		tmp = tmp->next;
	}
	return (NULL);
}
