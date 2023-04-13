#include "main.h"
#include <stdlib.h>

/**
* malloc_checked - allocate memory
* @b: size allocation of memory
* by: laila tabourit
* Return: pointer
*/

void *malloc_checked(unsigned int b)
{
	char *p;

	p = malloc(b);
	if (p == NULL)
	{
		exit(98);
		return (NULL);
	}
	return (p);
}
