#include "lists.h"

/**
 * add_dnodeint - function that adds a node at the beginning of a list
 * @head: pointer container address of the head to a list
 * @n: data to stored in nodes
 *
 * Return: return address of new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *ptr = malloc(sizeof(dlistint_t));
	dlistint_t *tmp;

	if (ptr == NULL)
		return (NULL);

	ptr->n = n;
	ptr->next = NULL;
	ptr->prev = NULL;
	tmp = *head;
	if (tmp != NULL)
	{
		while (tmp->prev != NULL)
			tmp = tmp->prev;
	}
	if (tmp != NULL)
	{
		ptr->next = tmp;
		tmp->prev = ptr;
	}
	*head = ptr;
	return (ptr);
}
