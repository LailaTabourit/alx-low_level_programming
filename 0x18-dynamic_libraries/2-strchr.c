#include "main.h"
#include <stddef.h>
/**
 * _strchr - a function that return a  pointer to the first
 *occurrence of the character
 * @s: pointer variable
 * @c: variable need to look at
 * Return: Always *s (Success)
 */

char *_strchr(char *s, char c)
{
	int i;

	while (1)
	{
		i = *s++;

		if (i == c)
			return (s - 1);

		if (i == 0)
			return (NULL);
	}
}
