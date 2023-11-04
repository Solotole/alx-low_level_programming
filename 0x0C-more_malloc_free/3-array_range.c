#include "main.h"

/**
 * array_range - function that creates an array of integers
 * @min: minimum input
 * @max: maximum input
 *
 * Return: return array
 */

int *array_range(int min, int max)
{
	int *array, i;

	if (min > max)
		return (NULL);
	array = malloc(sizeof(int) * (max - min) + 1);
	if (array == NULL)
		return (NULL);
	i = 0;
	while (min <= max)
	{
		array[i] = min++;
		i++;
	}
	return (array);
}
