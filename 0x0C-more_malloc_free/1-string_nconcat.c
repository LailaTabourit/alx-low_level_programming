#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* *string_nconcat - function that conctenates two strings
* @s1: string1
* @s2: string2
* @n: number of bytes
* by: laila tabourit
*
* Return: pointer
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i = 0, j = 0, len1 = 0, len2 = 0;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;

	if (n < len2)
		s = malloc(sizeof(char) * (len1 + n + 1));
	else
		s = malloc(sizeof(char) * (len1 + len2 + 1));

	if (!s)
		return (NULL);

	while (i < len1)
	{
		s[i] = s1[i];
		i++;
	}

	while (n < len2 && i < (len1 + n))
		s[i++] = s2[j++];

	while (n >= len2 && i < (len1 + len2))
		s[i++] = s2[j++];

	s[i] = '\0';

	return (s);
}

