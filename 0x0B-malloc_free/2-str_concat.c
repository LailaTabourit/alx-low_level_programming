#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
* str_concat - concatenate two strings
* @s1: first string
* @s2: second string
*
* by: laila tabourit
* Return: the result string, or NULL if it fails
*/

char *str_concat(char *s1, char *s2)
{
	char *s;
	unsigned int i = 0, j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	s = (char *) malloc((strlen(s1) + strlen(s2) + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);

	for (i = 0; i < strlen(s2); i++)
		s[i] = s1[i];
	for (j = 0; j < strlen(s2); i++, j++)
		s[i] = s2[j];
	s[i] = '\0';
	return (s);
}


