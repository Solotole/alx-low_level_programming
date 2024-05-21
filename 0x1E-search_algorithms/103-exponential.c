#include "search_algos.h"
/**
 * binary_searching - function responsible for binary searching
 * @array: array in question
 * @start: starting index of the array
 * @end: ending point of the array
 * @value: value to search for
 *
 * Return: return -1 on failure or index on success
 */
int binary_searching(int *array, size_t start, size_t end, int value)
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
		return (middle);
	if (value > array[middle])
		return (binary_searching(array, middle + 1, end, value));
	if (value < array[middle])
		return (binary_searching(array, start, middle - 1, value));
	return (-1);
}
/**
 * exponential_search - function responsible for exponential searchng
 * @array: array to be considered
 * @size: size of the array in question
 * @value: value to be searched
 *
 * Return: return index on success and -1 on failure
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t start, end, index;

	if (array == NULL || size == 0)
		return (-1);
	if (array[0] == value)
		return (0);
	start = 1;
	while (start < size && array[start] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", start, array[start]);
		start *= 2;
	}
	if ((array[start / 2] + 1 == value) && (array[start] - 1 == value))
	{
		end = start;
		start /= 2;
	}
	else
	{
		end = start - 1;
		start /= 2;
	}
	printf("Value found between indexes [%ld] and [%ld]\n", start, end);
	index = binary_searching(array, start, end, value);
	return (index);
}
