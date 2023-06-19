#include "main.h"

/**
 * _memset - a function that set a block of memory to a value
 * @s: pointer variable
 * @b: variable input
 * @n: variable sizeof
 * Return: Always s (Success)
 */


char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n--)
		*p++ = (unsigned char)b;


	return (s);
}
