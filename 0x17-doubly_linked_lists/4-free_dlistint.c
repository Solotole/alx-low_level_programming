#include "lists.h"

/**
 * free_dlistint - function that frees a list
 * @head: pointer containing address of the head of the list
 *
 * Return: return void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while ((tmp = head) != NULL)
	{
		head = head->next;
		free(tmp);
	}
}
