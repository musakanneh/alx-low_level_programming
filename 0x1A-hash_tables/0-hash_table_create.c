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
	hash_table_t *ht;
	unsigned long int i;

	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
	{
		return (NULL);
	}
	ht->size = size;
	ht->array = malloc(sizeof(hash_table_t *) * size);
	if (ht->array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ht->array[i] = NULL;
	}
	return (ht);
}
