#include "search_algos.h"
#include <math.h>
/**
 * jump_search - function carrying out jump search
 * @array: array in question
 * @size: size of the array
 * @value: value to be targeted
 *
 * Return: return -1 on failure or index on success
 */
int jump_search(int *array, size_t size, int value)
{
	size_t steps = sqrt(size);
	size_t i, start = 0, end = 0;

	if (size == 0 || array == NULL)
		return (-1);
	while (start < size && array[start] < value)
	{
		printf("Value checked array [%ld] = [%d]\n", start, array[start]);
		start += steps;
	}
	end = start;
	start = start > steps ? start - steps : 0;
	if (start == 0)
	{
		printf("Value found between indexes [%ld] and [%ld]\n", start, steps);
		for (i = start; i < steps; i++)
		{
			printf("Value checked array [%ld] = [%d]\n", i, array[i]);
			if (array[i] == value)
				return (i);
		}
	}
	printf("Value found between indexes [%ld] and [%ld]\n", start, end);
	for (i = start; i < size && i <= end; i++)
	{
		printf("Value checked array [%ld] = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);
	}
	return (-1);
}
