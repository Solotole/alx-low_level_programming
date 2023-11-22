#include "lists.h"

/**
 * add_nodeint - function that adds new node ata the beginning of list
 * @head: head  of previous link
 * @n: valuse parameter passed
 *
 * Return: return address of new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (*head);
}
