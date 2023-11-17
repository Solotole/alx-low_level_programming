#include <stdio.h>
/**
 * First - function assigned eith __attribute__
 */
void  __attribute__((constructor)) First(); /*runs before mainfunction*/
/**
 * First - function that prints
 * Return: return void
 */
void First(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
