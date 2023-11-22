#include "lists.h"
/**
 * add_nodeint_end - function that adds node at the end of list
 * @head: current pointer to the head of list
 * @n: number parameter passed
 *
 * Return: return head
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *current_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	current_node = *head;

	if (current_node == NULL)
		*head = new_node;
	else
	{
		while (current_node->next != NULL)
			current_node = current_node->next;
		current_node->next = new_node;
	}
	return (*head);
}
