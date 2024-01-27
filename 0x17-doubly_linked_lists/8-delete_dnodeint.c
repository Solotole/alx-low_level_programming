#include "lists.h"
/**
 * delete_dnodeint_at_index - function deleting a node at a given index
 * @head: pointer to a pointer containing address to the list head
 * @index: index to delete the node
 *
 * Return: return 1:success and -1:failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = *head;
	dlistint_t *current = *head;
	int value;
	unsigned int i = 0;

	if (tmp != NULL)
	{
		while (current != NULL)
		{
			if (i == index)
			{
				tmp->next = current->next;
				current->next = tmp;
				free(current);
			}
			tmp = current;
			current = current->next;
			i++;
		}
		value = 1;
	}
	else
		value = -1;
	return (value);
}
