#include "lists.h"
/**
 * sum_listint - function that returns sum of data
 * @head: pointer to head of linked list
 *
 * Return: return sum of data stored in a list
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
