#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: array of numbers input
 * @size: size of array
 * @cmp: pointer to the function to be used to compare values
 *
 * Return: return index(success) and -1(failure)
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int ind;

	if (array == NULL || cmp == NULL)
		return (-1);
	for (ind = 0; ind < size; ind++)
	{
		if ((*cmp)(array[ind]) != 0)
			return (ind);
	}
	return (-1);
}
