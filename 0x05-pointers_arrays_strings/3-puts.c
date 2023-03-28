#include "main.h"

/**
 * _puts - a fucntion that print string followed by new line
 * @str: pointer variable
 * Return: void return nothing
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
