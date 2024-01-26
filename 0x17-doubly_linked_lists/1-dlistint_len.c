#include "lists.h"

/**
 * dlistint_len - function returning number of elements in a linked list
 * @h: head of the node
 *
 * Return: return nodes-number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	if (h == NULL)
		return (nodes);
	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
