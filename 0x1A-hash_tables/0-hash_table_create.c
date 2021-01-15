#include "hash_tables.h"

/**
 * hash_table_create - create a hash table
 * @size: the size of hash table
 * 
 * Return: returns the hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
    /**
     * Create a pointer and allocate a memory to the hash table nodes
     * Validate the table and assign its size
     * Traverse the table and set its initial value to null
     */
    hash_table_t *hash_table;
    unsigned long int i;
    hash_table = malloc(sizeof(hash_table_t));
    if (hash_table == NULL)
    {
        return (NULL);
    }
    hash_table->size = size;
    hash_table->array = malloc(sizeof(hash_table_t *) * size);
    if (hash_table->array == NULL)
    {
        return (NULL);
    }
    for (i = 0; i < size; i++)
    {
        hash_table->array[i] = NULL;
    }
    return (hash_table);
}