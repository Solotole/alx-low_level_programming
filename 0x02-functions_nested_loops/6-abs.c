#include "main.h"

/**
 * _abs -  function that computes the absolute value of an integer
 * @v: character to be converted into absolute nature
 *
 * Return: Returns c if v is -ve and return v otherwise
 */

int _abs(int v)
{
	int c;

	if (v < 0)
	{
		c = v * -1;
		return (c);
	}
	else
		return (v);
}
