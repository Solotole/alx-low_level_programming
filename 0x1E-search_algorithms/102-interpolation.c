#include "search_algos.h"
/**
 * searching - function carying out inary recursive for the
 * interpolation search mechanism
 * @array: array in question
 * @low: lower most index of the array block
 * @high: highest most index of the array block
 * @value: value to search for
 *
 * Return: return -1 on success or index on success
 */
int searching(int *array, size_t low, size_t high, int value)
{
	size_t pos;

	if (low > high)
	{
		return (-1);
	}
	pos = low + (((double)(high - low) / (array[high] - array[low])) *
			 (value - array[low]));
	if (pos > high)
	{
		printf("Value checked array[%ld] is out of range\n", pos);
		return (-1);
	}
	printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
	if (array[pos] == value)
		return (pos);
	if (array[pos] > value)
		return (searching(array, low, pos, value));
	if (array[pos] < value)
		return (searching(array, pos + 1, high, value));
	return (-1);
}
/**
 * interpolation_search - interpolation searching function
 * @array: array in question
 * @size: size of the array
 * @value: value to be searched
 *
 * Return: return -1 on failure and index on success
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t index;

	if (array == NULL || size == 0)
		return (-1);
	index = searching(array, 0, size - 1, value);
	return ((int)index);
}
