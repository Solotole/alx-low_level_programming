#include "hash_tables.h"
/**
 * hash_table_create - function that creats hash table
 * @size: size of the table
 *
 * Return: return pointer to the created table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i, full = size;
	hash_table_t *table = malloc(sizeof(hash_table_t));

	if (table == NULL)
		return (NULL);
	table->size = full;
	table->array = calloc(full, sizeof(hash_node_t *));
	for (i = 0; i < table->size; i++)
		table->array[i] = NULL;
	return (table);
}
