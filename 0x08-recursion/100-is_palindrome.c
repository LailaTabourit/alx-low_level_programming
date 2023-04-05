#include "main.h"
int _strlen_recursion(char *s);
int check_palindrome(char *s, int i, int len);

/**
* is_palindrome - checks if a string is palidrome
* @s: variable string to reverse.
* by: laila tabourit
* Return: return 1 if palindrome, 0 if not
*/

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_palindrome(s, 0, _strlen_recursion(s)));
}

/**
* _strlen_recursion - a fucntion that returns  length of a string
* @s: pointer
* by : laila tabourit
* Return: Length of string
*/

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + _strlen_recursion(s + 1));
}


/**
* check_palindrome - check if the string reversly is palindrome
* @s: string to checks
* @i: number of iteration
* @len: length of string.
* by : laila tabourit
* Return: return 1 if palindorm, 0 if not.
*/

int check_palindrome(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check_palindrome(s, i + 1, len - 1));
}
