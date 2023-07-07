#include "hash_tables.h"

/**
 * hash_djb2 - function that gives you the index of a key.
 * a string given (hash number)
 *
 * @str: string
 * Return:  the index at which the key/value stored in the hash table
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hsh;
	int c;

	hsh = 5381;
	while ((c = *str++))
	{
		hsh = ((hsh << 5) + hsh) + c; /* hash * 33 + c */
	}
	return (hsh);
}

