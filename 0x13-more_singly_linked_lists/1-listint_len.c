#include "lists.h"
/**
 * listint_len - function that prints number of elements
 * @h: parameter pointer
 *
 * Return: element count
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
