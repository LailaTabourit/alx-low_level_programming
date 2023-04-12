#include <stdlib.h>
#include <stdio.h>
#include "main.h"
#include <string.h>

/**
* argstostr - concatenates args in one vertical string
* @ac: argument
* @av: argument
*
* by: laila tabourit
* Return: the result string, or NULL if any error
*/

char *argstostr(int ac, char **av)
{
	char *s;
	int len = 0, i, j, k = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		len += strlen(av[i]) + 1;
	}
	s = malloc((len + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, k++)
		{
			s[k] = av[i][j];
		}
		s[k] = '\n';
		k++;
	}
	s[k] = '\0';

	return (s);
}

