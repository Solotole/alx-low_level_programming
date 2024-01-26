#include "lists.h"
/**
 * print_dlistint - function that all elements of a list
 * @h: head of the list
 *
 * Return: return number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t n = 0;

	if (h == NULL)
		return (n);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		n++;
		h = h->next;
	}
	return (n);
}
