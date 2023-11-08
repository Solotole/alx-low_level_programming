#include "function_pointers.h"

/**
 * print_name - function that prints a name
 * @name: name input
 * @f: pointer to a function
 *
 * Return: return void
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
