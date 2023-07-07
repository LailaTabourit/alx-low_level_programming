#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_set -  function that adds an element to the hash table.
 * @ht: The table
 * @key: The key
 * @value: The value
 *
 *by laila
 * Return: 1 on success, 0 on failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int indx = 0;
	hash_node_t *new_hash_node = NULL;
	hash_node_t *temp = NULL;

	if (!ht || !key || !(*key) || !value)
		return (0);

	indx = key_index((unsigned char *)key, ht->size);
	temp = ht->array[indx];

	/* check if key exists */
	while (temp && strcmp(temp->key, key) != 0)
		temp = temp->next;

	/* update value if key already exists */
	if (temp)
	{
		free(temp->value);
		temp->value = strdup(value);
		return (1);
	}

	/* add new node if key not found */

	new_hash_node = malloc(sizeof(*new_hash_node));
	if (!new_hash_node)
		return (0);

	new_hash_node->key = strdup(key);
	new_hash_node->value = strdup(value);

	new_hash_node->next = ht->array[indx];
	ht->array[indx] = new_hash_node;
	return (1);
}
