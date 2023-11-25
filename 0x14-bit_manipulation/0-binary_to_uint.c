#include "main.h"
/**
 * power - function that carries the power of 2
 * @a: value to be multiplied by itself
 * @b: determining value
 * Return: return result
 */
unsigned int power(int a, unsigned int b)
{
	unsigned int result;

	if (b == 0)
		return (1);
	result = a * power(a, b - 1);
	return (result);
}
/**
 * binary_to_uint - fuinction that converts binary number to integer
 * @b: string passed to be converted
 *
 * Return: return integer on success and 0 upon fail
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i, count = 0, j, loop;
	unsigned int number = 0;

	i = 0;
	while (b[i] != '\0') /*to count string characters in b*/
	{
		count++;
		i++;
	}
	if (b == NULL)
		return (0);
	j = 0;
	while (j < count)
	{
		loop = count - 1 - j;
		if (b[j] != '0' && b[j] != '1')
			return (0);
		if (b[j] == '0' || b[j] == '1')
		{
			if (b[j] == '1')
			{
				number += power(2, loop);
			}
			if (b[j] == '0')
				number += 0;
		}
		j++;
	}
	return (number);
}
