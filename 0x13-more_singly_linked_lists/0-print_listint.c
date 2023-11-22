#include "lists.h"
/**
 * print_listint - function that prints all the elements
 * @h: parameter entry
 *
 * Return: return node count
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
