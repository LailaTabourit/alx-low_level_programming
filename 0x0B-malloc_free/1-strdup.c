#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
* _strdup - duplicate string, or NULL if it fault
* @str: string
*
* by: laial tabourit
* Return: duplicated string,or NULL
*/

char *_strdup(char *str)
{
	char *s;
	int i;

	if (str == NULL)
		return (NULL);
	s = (char *) malloc((strlen(str) + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		s[i] = str[i];
	s[i] = '\0';
	return (s);
}
