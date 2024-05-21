#include "search_algos.h"
/**
 * linear_search - function to carry out linear search on array
 * @array: pointer to an array to carry out linear search on
 * @size: size of the array
 * @value: value to search for
 *
 * Return: return -1 on failure and the index on success
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL || size == 0)
		return (-1);
	while (i < size)
	{
		if (*(array + i) == value)
		{
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
			return ((int)i);
		}
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		i++;
	}
	return (-1);
}
