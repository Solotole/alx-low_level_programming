#include "main.h"

/**
 * flip_bits - function that returns number of bits to br flipped
 * @n: first parameter
 * @m: secong parameter
 *
 * Return: returns number of bits nedded to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int var = 63;
	int counter = 0;
	unsigned long int present;
	unsigned long int complete = n ^ m;

	while (var >= 0)
	{
		present = complete >> var;
		if (present & 1)
			counter++;
		var--;
	}
	return (counter);
}
