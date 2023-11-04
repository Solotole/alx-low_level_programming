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
	int *array, i, space;

	if (min > max)
		return (NULL);
	space = (max - min) + 1;
	array = malloc(sizeof(int) * space);
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
