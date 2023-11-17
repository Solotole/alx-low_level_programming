#include "lists.h"
/**
 * add_node - function that adds a new node at the beginning of a list list_t
 * @head: the head of previous linked list
 * @str: string to be added
 *
 * Return: return the new head of the list-new_node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int size = 0, i;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		size++;

	new_node->str = strdup(str);
	new_node->len = size;
	new_node->next = *head;
	*head = new_node;
	return (*head);
}
