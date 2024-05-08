#include "main.h"
/**
 * palindrome_recursion - function to carry out recurion
 * @str: string to consider
 * @start: first string index to compare
 * @end: last string index to compare
 *
 * Return: return 0 if not palindrome and 1 otherwise
 */
int palindrome_recursion(char *str, int start, int end)
{
	if (start >= end)
		return (1);
	if (str[start] != str[end])
		return (0);
	return (palindrome_recursion(str, start + 1, end - 1));
}
/**
 * is_palindrome - function to confirm for palindrome quality
 * @s: string to consider
 *
 * Return: return 0 if not palindrome and 1 otherwise
 */
int is_palindrome(char *s)
{
	int i, value, length = 0;

	for (i = 0; s[i] != '\0'; i++)
		length++;
	value = palindrome_recursion(s, 0, length - 1);
	return (value);
}
