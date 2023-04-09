#include "main.h"

/**
 * *_strcpy - copie the string pointed to src
 * @dest: pointer vriable
 * @src: pointer variable
 * Return: void return nothing
 */

char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
