#include "search_algos.h"
#include <stdio.h>
/**
 * linear_skip - function handling linear skip on a singly linked list
 * @list: list in question
 * @value: value to search for
 *
 * Return: return NULL on failure or pointer to the node on success
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *current = list;
	skiplist_t *prev = NULL;

	if (list == NULL)
		return (NULL);
	while (current->express != NULL)
	{
		printf("Value checked at index [%lu] = [%d]\n",
				 current->express->index, current->express->n);
		if (current->express->n >= value)
			break;
		current = current->express;
	}
	prev = current;
	if (current->express != NULL)
	{
		current = current->express;
		printf("Value found between indexes [%lu] and [%lu]\n",
				 prev->index, current->index);
	}
	else
	{
		while (current->next != NULL)
			current = current->next;
		printf("Value found between indexes [%lu] and [%lu]\n",
				 prev->index, current->index);
		current = current->next;
	}
	while (prev != NULL && (current == NULL || prev->index <= current->index))
	{
		printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
		if (prev->n == value)
			return (prev);
		prev = prev->next;
	}
	return (NULL);
}
