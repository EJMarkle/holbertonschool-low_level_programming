#include "hash_tables.h"
/**
 * key_index - gets index of key in hash table
 * @key: key
 * @size: size of array in table
 * Return: the index where the key val pair will be stored
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value;

	hash_value = hash_djb2(key);

	return (hash_value % size);
}
