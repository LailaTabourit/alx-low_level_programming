#include "main.h"

/**
 * _strcmp - a function that compare 2 function
 * @s1: pointer variable
 * @s2: pointer variable
 * Return: Always s1 - s2
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
