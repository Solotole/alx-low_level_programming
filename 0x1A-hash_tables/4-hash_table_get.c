#include "hash_tables.h"
/**
 * hash_table_get - function that searches and returns value of a key
 * @ht: hash table identity
 * @key: key to be searched for
 *
 * Return: return NULL on failure to locate and the value on success
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int location;
	hash_node_t *current;

	if (ht == NULL || key == NULL || strlen(key) == 0)
		return (NULL);

	location = key_index((const unsigned char *)key, ht->size);
	if (location >= ht->size)
		return (NULL);
	current = ht->array[location];
	while (strcmp(current->key, key) != 0 && current)
		current = current->next;

	return ((current == NULL) ? NULL : current->value);
}
