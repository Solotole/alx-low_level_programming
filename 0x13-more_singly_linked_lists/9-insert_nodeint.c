#include "lists.h"
/**
 * create_node - function that cretes a node
 * @a: data passed to be stored in the created node
 *
 * Return: return new_node
 */
listint_t *create_node(int a)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);
	new_node->n = a;
	new_node->next = NULL;
	return (new_node);
}

/**
 * insert_nodeint_at_index - function that inserts new_node in list
 * @head: pointer head to the list
 * @idx: index for inserting the node
 * @n: data n to be stored in the inserted node
 *
 * Return: address of new_node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *tmp1, *tmp2, *new_node;

	tmp1 = *head;
	if (head == NULL)
		return (NULL);
	new_node = create_node(n);
	if (new_node == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	if (idx == 0)
		*head = new_node;
	while (i < idx - 1 && tmp1 != NULL && idx != 0)
	{
		tmp1 = tmp1->next;
		i++;
	}
	if (tmp1 == NULL)
		return (NULL);
	if (idx == 0)
		new_node->next = tmp1;
	if (idx != 0)
	{
		tmp2 = tmp1->next;
		tmp1->next = new_node;
		new_node->next = tmp2;
	}
	return (new_node);
}
