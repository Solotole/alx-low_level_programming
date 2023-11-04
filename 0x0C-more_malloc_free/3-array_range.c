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
	int *array, j, i;

	if (min > max)
		return (NULL);
	array = malloc(sizeof(int) * (max - min) + 1);
	if (array == NULL)
		return (NULL);
	i = 0;
	while (i <= (max - min))
	{
		j = min;
		if (j >= min && j <= max)
			j += i;
		array[i] = j;
		i++;
	}
	return (array);
}
