#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* string_nconcat - function that conctenates two strings
* @s1: string1
* @s2: string2
* @n: number of bytes
* by: laila tabourit
* Return: pointer
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0, i = 0, j = 0;
	char *p;

	while (s1 && s1[len1])
		len1++;

	while (s2 && s2[len2])
		len2++;

	if (n >= len2)
		n = len2;

	p = (char *) malloc((len1 + n + 1) * sizeof(char));

	if (p == NULL)
		return (NULL);

	while (i < len1)
	{
		*(p + 1) = *(s1 + i);
		i++;
	}

	while (i < (len1 + n))
	{
		*(p + i) = *(s2 + j);
		i++;
		j++;
	}
	*(p + i) = '\0';
	return (p);

}
