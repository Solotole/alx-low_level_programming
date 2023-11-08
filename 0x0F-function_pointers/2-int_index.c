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
	int index, a;

	if (size <= 0)
		a = -1;
	for (index = 0; index < size; index++)
	{
		if ((*cmp)(array[index]) != 0)
		{
			a = index;
			break;
		}
		if (
	}
	return (a);
}
