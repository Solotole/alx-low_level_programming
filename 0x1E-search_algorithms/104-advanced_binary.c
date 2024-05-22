#include "search_algos.h"
/**
 * reverse_index - function responsible for finding index in the reverse
 *
 * @array: array in question
 * @top: middle - 1 of the array
 * @value: value to be searched for
 *
 * Return: return -1 on failure and the reverse index on success
 */
int reverse_index(int *array, size_t top, int value)
{
	int i = (int)top;

	while (i >= 0)
	{
		if (array[i] == value)
			return (i);
		i--;
	}
	return (-1);
}
/**
 * recursive_binary_search - recursive binary searching for a value
 * @array: array to search for the value
 * @start: starting index of the array searching
 * @end: ending index of the array searching
 * @value: value to search for
 *
 * Return: return -1 on failure and the index on success
 */
size_t recursive_binary_search(int *array, size_t start, size_t end, int value)
{
	size_t middle, i;
	int reverse;

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
		reverse = reverse_index(array, middle - 1, value);
		if (reverse >= 0)
			return (recursive_binary_search(array, start, middle, value));
		else if (reverse == -1)
			return (middle);
	}
	if (value > array[middle])
		return (recursive_binary_search(array, middle + 1, end, value));
	if (value < array[middle])
		return (recursive_binary_search(array, start, middle - 1, value));
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

	if (array == NULL)
		return (-1);
	index = recursive_binary_search(array, 0, size - 1, value);
	return ((int)index);
}
