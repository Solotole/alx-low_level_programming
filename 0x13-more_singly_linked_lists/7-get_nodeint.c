#include "lists.h"
/**
 * get_nodeint_at_index - function returning nth node of a list
 * @head: head pointer o the list
 * @index: index of node starting from 0
 *
 * Return: return head
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (i < index)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
		i++;
	}
	return (head);
}
