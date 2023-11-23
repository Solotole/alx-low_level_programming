#include "lists.h"
/**
 * pop_listint - function that deletes the head node of list returning data
 * @head: pointer containing address of head
 *
 * Return: return head node data
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int data;

	if (head == NULL && *head == NULL)
		return (0);
	if (head != NULL && *head != NULL)
	{
		data = (*head)->n;
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
		tmp = NULL;
	}
	return (data);
}
