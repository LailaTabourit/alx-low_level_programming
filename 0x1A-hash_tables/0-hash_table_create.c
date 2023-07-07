#include "hash_tables.h"

/**
* hash_table_create - function that creates a hash table
* @size: size of table
*
* by: laila
* Return: pointer to the newly created hash table
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *tab;
	hash_node_t **arr;
	unsigned long int i;

	tab = malloc(sizeof(hash_table_t));
	if (tab == NULL)
		return (NULL);

	arr = malloc(sizeof(hash_node_t *) * size);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = NULL;

	tab->arr = arr;
	tab->size = size;

	return (tab);
}
