#include "search_algos.h"
#include <math.h>
/**
 * jumping_nodes - function responsible for jumping role of algorithm
 * @node: node in question
 * @jumps: number of jumps to be conducted
 *
 * @value: value to be searched for
 * Return: return NULL on failure or node on success
 */
listint_t *jumping_nodes(listint_t *node, size_t jumps, int value)
{
	size_t index = node->index;
	listint_t *ptr;

	while (node)
	{
		ptr = node;
		if (value > node->n && node->next == NULL)
			return (ptr);
		if (node->index == index + jumps)
			return (node);
		node = node->next;
	}
	return (NULL);
}
/**
 * jump_list - function responsible for jump search algorithm in singly linked
 * list
 * @list: head of the list
 * @size: number of elements in the list
 * @value: value to be searched
 *
 * Return: return NULL on failure and node on success
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t jumps = sqrt(size);
	listint_t *start = NULL, *end = NULL;

	if (list == NULL || size == 0)
		return (NULL);
	if (list->n == value)
	{
		printf("Value checked at index [%ld] = [%d]\n", list->index, list->n);
		return (list);
	}
	end = list;
	while (end->index < size && end->n < value)
	{
		start = end;
		end = jumping_nodes(end, jumps, value);
		printf("Value checked at index [%ld] = [%d]\n", end->index, end->n);
		if (end->next == NULL)
			break;
	}
	printf("Value found between indexes [%ld] and [%ld]\n",
			 start->index, end->index);
	while (start)
	{
		printf("Value checked at index [%ld] = [%d]\n", start->index, start->n);
		if (start->n == value)
			return (start);
		start = start->next;
	}
	return (NULL);
}
