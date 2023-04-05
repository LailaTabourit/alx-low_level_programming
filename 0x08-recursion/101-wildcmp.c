#include "main.h"

/**
* wildcmp - function that comapares two strings
* @s1: string one
* @s2: string two
* by: laila tabourit
*
* Return: 1 if the strings is identical, 0 if not
*/

int wildcmp(char *s1, char *s2)
{
	if (*s2 == '\0' && *s1 == '\0')
		return (1);
	if (*s2 == '*' && *(s2 + 1) != '\0' && *s1 == '\0')
		return (0);
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	if (*s2 == '*')
		return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
	return (0);
}

