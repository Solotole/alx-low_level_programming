#include "main.h"

/**
 * _isalpha - function that checks for alphabetic character
 * @c: character to be verified
 *
 * Return: Return 1 if lowercase and 0 if otherwise
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
