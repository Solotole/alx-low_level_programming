#include "lists.h"
/**
 * list_len -  function that returns the number of elements
 * @h: pointer parameter
 *
 * Return: return elements
 */

size_t list_len(const list_t *h)
{
	size_t elements = 0;

	while (h)
	{
		h = h->next;
		elements++;
	}
	return (elements);
}
