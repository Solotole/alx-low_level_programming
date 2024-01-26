#include "lists.h"
/**
 * sum_dlistint - function that returns sum of the data stored in the list
 * @head: pointer containing the addree in the head
 *
 * Return: return the sum of the data in the list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	if (head != NULL)
	{
		while (head != NULL)
		{
			sum += head->n;
			head = head->next;
		}
	}
	return (sum);
}
