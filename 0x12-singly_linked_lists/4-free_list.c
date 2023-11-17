#include "lists.h"
/**
 * free_list - function that frees list_t list
 * @head: current head node
 *
 * Return: return void
 */

void free_list(list_t *head)
{
	list_t *node;

	while ((node = head) != NULL)
	{
		head = head->next;
		free(node->str);
		free(node);
	}
}
