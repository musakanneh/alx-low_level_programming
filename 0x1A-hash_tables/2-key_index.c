#include "hash_tables.h"

/**
 * key_index - create a hash table
 * @size: the size of hash table
 * @key: the key
 *
 * Return: returns the hash table
 * Description - the function uses the hash_djb2 function
 * and returns the index at which the key/value pair should be
 * stored in the array of the hash table
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
