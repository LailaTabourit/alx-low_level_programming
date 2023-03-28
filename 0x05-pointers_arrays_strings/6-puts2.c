#include "main.h"

/**
 * puts2 - a function that print every other character of string
 * @str: pointer variable
 * Return: void return nothing
 */

void puts2(char *str)
{
	int i, len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
