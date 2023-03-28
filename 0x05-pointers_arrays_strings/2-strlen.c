#include "main.h"

/**
 * _strlen -  a function that return lenght of string
 * @s: pointer variable
 * Return: Always i (Success)
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
