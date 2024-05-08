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
	if (str[start] != str[end - 1])
		return (0);
	return (palindrome_recursion(str, start + 1, end - 1));
}
/**
 * length - strlen replica though in recursion
 * @str: string to find for length
 *
 * Return: return the length of a string
 */
int length(char *str)
{
	if (*str == '\0')
		return (0);
	return (1 + length(str + 1));
}
/**
 * is_palindrome - function to confirm for palindrome quality
 * @s: string to consider
 *
 * Return: return 0 if not palindrome and 1 otherwise
 */
int is_palindrome(char *s)
{
	int value;

	if (s[0] == '\0')
		return (1);
	value = palindrome_recursion(s, 0, length(s));
	return (value);
}
