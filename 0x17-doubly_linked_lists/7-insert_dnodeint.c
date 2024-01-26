#include "lists.h"
/**
 * insert_dnodeint_at_index - function that inserts a node at a given index
 * @h: pointer to pointer containing address of the head
 * @idx: index to be addressed the new node
 * @n: data to be placed in the new node
 *
 * Return: return the address of the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *ptr = malloc(sizeof(dlistint_t));
	dlistint_t *tmp = *h;
	unsigned int count = 0;

	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	ptr->next = NULL;
	ptr->prev = NULL;
	if (ptr != NULL)
	{
		while (tmp != NULL)
		{
			if (count == idx)
			{
				ptr->prev = tmp->prev;
				ptr->next = tmp;
			}
			tmp = tmp->next;
			count++;
		}
	}
	else
		return (NULL);
	return (ptr);
}
