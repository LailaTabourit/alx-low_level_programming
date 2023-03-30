#include "main.h"

/**
 * *string_toupper - a function that switch string to upper case
 * @s: pointer variable
 * Return: Always *s when Success
 */

char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
	}

	return (s);
}
