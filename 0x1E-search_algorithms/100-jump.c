#include "search_algos.h"
#include <math.h>


/**
 * min - finds smaller number
 * @a: number a
 * @b: numberb
 * Return: the smaller
 */

int min(int a, int b)
{
	if (a < b)
		return (a);
	return (b);
}

/**
 * jump_search - searches for a value in a sorted array
 * of integers using the Jump search algorithm
 * @array: pointer to the first element of the array
 * @size: number of elements in array
 * @value: value to search for
 * Return: the first index where value is located
 * You can assume that array will be sorted in ascending order
 * If value is not present in array or if array is NULL,
 * your function must return -1
 */

int jump_search(int *array, size_t size, int value)
{
	int step = sqrt((int)size);
	int prev = 0;

	while (array[min(step, (int)size) - 1] < value)
	{
		prev = step;
		step += step;
		if (prev >= (int)size)
			return (-1);
		printf("aValue checked array[%i] = [%i]\n", prev, array[prev]);
	}

	while (array[prev] < value)
	{
		prev++;
		if (prev == min(step, (int)size))
			return (-1);
		printf("bValue checked array[%i] = [%i]\n", prev, array[prev]);
	}

	if (array[prev] == value)
		return (prev);

	return (-1);
}
