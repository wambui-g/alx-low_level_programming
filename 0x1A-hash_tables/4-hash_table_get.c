#include "hash_tables.h"

/**
 * hash_table_get- function that retrieves a value associated with a key
 * @ht: hash table to consider
 * @key: key to retrieve value for
 *
 * Return: value associated with key or NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int index;

	if (ht == NULL)
		return (NULL);

	index = key_index((const unsigned char *) key, ht->size);
	node = ht->array[index];

	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next;
	}
	return (NULL);
}
