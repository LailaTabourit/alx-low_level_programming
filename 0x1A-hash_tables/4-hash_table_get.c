#include "hash_tables.h"
/**
 * hash_table_get - function that retrieves a value associated with a key.
 *
 * @ht: pointer
 * @key: key
 *by : laila
 * Return: value of the hash.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int k_indx;
	hash_node_t *temp;

	if (ht == NULL)
		return (NULL);

	if (key == NULL || *key == '\0')
		return (NULL);

	k_indx = key_index((unsigned char *)key, ht->size);

	temp = ht->array[k_indx];

	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
			return (temp->value);
		temp = temp->next;
	}

	return (NULL);
}
