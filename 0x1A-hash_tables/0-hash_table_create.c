#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table.
 * @size: the size of node
 *
 * Return: a pointer to the newly created hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
        unsigned int i = 0;
        hash_table_t *ht = malloc(sizeof(hash_table_t));

        if (ht == NULL)
        {
                fprintf(stderr, "Error: malloc failed\n");
                return (NULL);
        }

        ht->size = size;
        ht->array = malloc(sizeof(hash_node_t *) * size);
        if (ht->array == NULL)
        {
                fprintf(stderr, "Error: malloc failed\n");
                return (NULL);
        }

        for (; i < size; i++)
                ht->array[i] = NULL;

        return (ht);
}