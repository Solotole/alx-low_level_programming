#include "lists.h"
/**
 * delete_nodeint_at_index - function that deletes a noode
 * @head: pointer to the haed of the linked list
 * @index: index to delete the node
 *
 * Return: return -1-failure and 1-success
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *tmp, *node;

	tmp = *head;
	if (head == NULL || *head == NULL)
		return (-1);
	while (i < index - 1 && tmp != NULL && index != 0)
	{
		tmp = (*head)->next;
		i++;
	}
	if (tmp == NULL)
		return (-1);
	if (index == 0)
	{
		node = tmp->next;
		free(tmp);
		*head = node;
	}
	if (index != 0)
	{
		if (tmp->next == NULL)
			node = tmp->next;
		else
			node = tmp->next->next;
		free(tmp->next);
		tmp->next = node;
	}
	return (1);
}
