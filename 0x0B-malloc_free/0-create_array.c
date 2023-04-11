#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
* create_array - Create an array and initialize it with a char
* @size: size of array
* @c: character
*
* by: laila tabourit
* Return: pointer to the array, NULL if it fails
*/

char *create_array(unsigned int size, char c)
{
	char *s = (char *) malloc(size * sizeof(char));
	unsigned int i;

	if (size == 0 || s == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		s[i] = c;
	return (s);
}
