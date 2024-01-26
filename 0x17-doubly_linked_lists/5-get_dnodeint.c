#include "lists.h"
/**
 * get_dnodeint_at_index - function that finds node at given index
 * @head: pointer containing the head of the list
 * @index: index of the node to be found
 *
 * Return: return the the node in the index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *ptr = NULL;
	unsigned int count = 0;

	while (head != NULL)
	{
		if (count == index)
			ptr = head;
		head = head->next;
		count++;
	}
	return (ptr);
}
