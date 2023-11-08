#include "function_pointers.h"

/**
 * array_iterator - function that executes a function passed as argument
 * @array: array pointer
 * @size: size of array
 * @action: pointer to a fuction used for action
 *
 * Return: return void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int index;

	for (index = 0; index < size; index++)
		(*action)(*(array + index));
}
