#include "main.h"

/**
 * _memcpy - a function that copy a block of memory from one
 *location to an other
 * @dest: pointer variable
 * @src: pointer variable
 * @n: variable size of element copy
 * Return: Always dest (Success)
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *p = dest;
	const char *s = src;

	while (n--)
		*p++ = *s++;


	return (dest);
}
