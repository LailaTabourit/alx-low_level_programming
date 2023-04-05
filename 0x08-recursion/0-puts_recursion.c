#include "main.h"

/**
* _puts_recursion - a function that set print string folloew by new line
* @s: pointer variable
* Return: void return nothing
*/


void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
