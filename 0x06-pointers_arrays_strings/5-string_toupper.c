#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * string_toupper - function changing lowercase letters to uppercase
 * @s: lowercase string
 *
 * Return: return i
 */

char *string_toupper(char *s)
{
	char *i;

	*i = toupper(s);
	return (*i);
}
