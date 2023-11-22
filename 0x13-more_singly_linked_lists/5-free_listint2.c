#include "lists.h"
/**
 * free_listint2 - function that frees a listint_t list
 * @head: pointer to a pointer head
 *
 * Return: return void
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	while (*head)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
	head = NULL;
}
