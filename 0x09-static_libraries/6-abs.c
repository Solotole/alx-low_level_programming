#include "main.h"

/**
 * _abs -  function that computes the absolute value of an integer
 * @c: character to be converted into absolute nature
 *
 * Return: Returns v if c is -ve and return c otherwise
 */

int _abs(int c)
{
	int v;

	if (c < 0)
	{
		v = c * -1;
		return (v);
	}
	else
		return (c);
}
