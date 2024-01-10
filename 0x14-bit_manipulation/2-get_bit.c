#include "main.h"

/**
 * get_bit -  function that returns the value of a bit at a given index
 * @n: pointer parameter
 * @index: variable containing index
 *
 * Return: return bit value or -1 on error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int d, confirm;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	d = 1 << index;
	confirm = n & d;
	if (confirm == d)
		return (1);
	return (0);
}
