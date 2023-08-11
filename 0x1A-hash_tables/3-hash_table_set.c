#include "hash_tables.h"

/**
 * hash_table_set- function that adds an element to the hash table
 * @ht: hash table to update
 * @key: key
 * @value: value associated with the key
 *
 * Return: 1 for sucess 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	hash_node_t *element = NULL, *new_node = NULL;

	if (ht == NULL || key == NULL || strcmp(key, "") == 0)
		return (0);

	index = key_index((unsigned char *) key, ht->size);
	element = ht->array[index];

	if (element && strcmp(key, element->key) == 0)
	{
		free(element->value);
		element->value = strdup(value);
		return (1);
	}

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = new_node;
	ht->array[index] = new_node;
	return (1);
}
