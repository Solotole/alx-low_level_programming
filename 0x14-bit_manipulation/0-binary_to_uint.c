#include "main.h"

/**
 * binary_to_uint - function that converts a binary number
 * @b: pointer to the string
 *
 * Return: return variable
 */
unsigned int binary_to_uint(const char *b)
{
	int j;
	int k;
	unsigned int variable;

	variable = 0;
	if (!b)
		return (0);
	j = 0;
	while (b[j] != '\0')
	{
		if (b[j] != '0' && b[j] != '1')
			return (0);
		j++;
	}
	for (k = 0; b[k] != '\0'; k++)
	{
		variable <<= 1;
		if (b[k] == '1')
			variable = variable + 1;
	}
	return (variable);
}
