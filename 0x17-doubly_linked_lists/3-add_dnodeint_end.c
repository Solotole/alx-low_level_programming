#include "lists.h"

/**
 * add_dnodeint_end - function that adds a new node at the end
 * @head: pointer to pointer containing head node address
 * @n: data to be stored
 * Return: return address of the newly introduced nod
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *ptr = malloc(sizeof(dlistint_t));
	dlistint_t *ptr1;

	if (ptr == NULL)
		return (NULL);

	ptr->n = n;
	ptr->next = NULL;
	ptr->prev = NULL;
	ptr1 = *head;
	if (ptr1 == NULL)
	{
		*head = ptr;
	}
	else
	{
		while (ptr1->next != NULL)
			ptr1 = ptr1->next;
		ptr1->next = ptr;
		ptr->prev = ptr1;
	}
	return (ptr);
}
