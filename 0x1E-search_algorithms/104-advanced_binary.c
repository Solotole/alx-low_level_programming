#include "search_algos.h"
/**
 * recursive_binary_search - recursive binary searching for a value
 * @array: array to search for the value
 * @start: beginning of th search block
 * @end: end of a search block
 * @value: value to search for
 *
 * Return: return -1 on failure and the index on success
 */
int recursive_binary_search(int *array, size_t start, size_t end, int value)
{
	size_t middle, i;

	if (start > end)
		return (-1);
	printf("Searching in array: ");
	for (i = start; i <= end; i++)
	{
		if (i > start)
			printf(", ");
		printf("%d", array[i]);
	}
	printf("\n");
	middle = start + (end - start) / 2;
	if (array[middle] == value)
	{
		if (middle == start || array[middle - 1] < value)
			return (middle);
		return (recursive_binary_search(array, start, middle, value));
	}
	if (array[middle] > value)
		return (recursive_binary_search(array, start, end - 1, value));
	if (array[middle] < value)
		return (recursive_binary_search(array, middle + 1, end, value));
	return (-1);
}
/**
 * advanced_binary - function to carry out for binary searching on an array
 * with identical targeted value
 * @array: pointer to an array in question
 * @size: size of the array in question
 * @value: value to search for
 *
 * Return: return -1 on failure or the index on success
 */
int advanced_binary(int *array, size_t size, int value)
{
	size_t index;

	if (array == NULL || size == 0)
		return (-1);
	index = recursive_binary_search(array, 0, size - 1, value);
	return ((size_t)index);
}
