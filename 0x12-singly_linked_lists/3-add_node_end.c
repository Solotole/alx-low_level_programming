#include "lists.h"
/**
 * add_node_end - function that adds a new node at the end of a list_t list
 * @head: head node
 * @str: string passed
 *
 * Return: return head
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tail_node, *last_node;
	unsigned int i, size = 0;

	tail_node = malloc(sizeof(list_t));
	if (tail_node == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		size++;
	tail_node->str = strdup(str);
	tail_node->len = size;
	tail_node->next = NULL;
	last_node = *head;

	if (last_node == NULL)
		*head = tail_node;
	else
	{
		while (last_node->next != NULL)
			last_node = last_node->next;
		last_node->next = tail_node;
	}
	return (*head);
}
