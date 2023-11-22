#include "lists.h"
/**
 * free_listint - functon that frees list listint_t
 * @head: parameter pointer
 *
 * Return: return void
 */
void free_listint(listint_t *head)
{
	free(head);
}
