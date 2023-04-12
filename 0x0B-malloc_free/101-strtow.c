#include "main.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

int count_the_word(char *s);

/**
* **strtow - Entry point
* @str: variable
* by: laila tabourit
* Return: pointer if Success, and NULL if Not
*/

char **strtow(char *str)
{
	char **twodim, *onedim;
	int len = 0, words, i, k = 0, j = 0, start, end;


	while (*(str + len))
		len++;

	words = count_the_word(str);
	if (words == 0)
		return (NULL);

	twodim = (char **) malloc((words + 1) * sizeof(char *));

	if (twodim == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (j)
			{
				end = i;
				onedim = (char *) malloc((j + 1) * sizeof(char));
				if (onedim == NULL)
					return (NULL);

				while (start < end)
					*onedim++ = str[start++];

				*onedim = '\0';
				twodim[k] = onedim - j;
				k++;
				j = 0;
			}
		}
		else if (j++ == 0)
			start = i;
	}
	twodim[k] = NULL;
	return (twodim);

}

/**
* count_the_word - Entry point
* @s: variable
* by: laila tabourit
* Return: number of words
*/
int count_the_word(char *s)
{
	int words = 0, i, flag = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			words++;
		}
	}

	return (words);
}
