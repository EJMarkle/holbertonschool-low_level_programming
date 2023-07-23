#include "hash_tables.h"
/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table to add or update pair
 * @key: key
 * @value: value associated with key
 * Return: 1 if success, 0 if fail
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *newnode, *temp;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	temp = ht->array[index];
	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = strdup(value);
			if (temp->value == NULL)
				return (0);
			return (1);
		}
		temp = temp->next;
	}
	newnode = malloc(sizeof(hash_node_t));
	if (newnode == NULL)
		return (0);
	newnode->key = strdup(key);
	newnode->value = strdup(value);
	if (newnode->key == NULL || newnode->value == NULL)
	{
		free(newnode->key);
		free(newnode->value);
		free(newnode);
		return (0);
	}
	newnode->next = ht->array[index];
	ht->array[index] = newnode;
	return (1);
}
