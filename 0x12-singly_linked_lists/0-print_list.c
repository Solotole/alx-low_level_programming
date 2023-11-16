#include "lists.h"
/**
 * print_list - function that prints all the elements of a list_t list
 * @h: pointer parameter
 *
 * Return: return count of nodes
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (-1);
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		if (h->str != NULL)
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		count++;
	}
	return (count);
}
