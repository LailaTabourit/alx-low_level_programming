#include "main.h"

/**
* _strlen_recursion - a function that return length of string entered
* @s: pointer variable
* by: laila tabourit
* Return: length of string
*/

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + _strlen_recursion(s + 1));
}
