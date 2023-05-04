#include "main.h"

/**
* binary_to_uint - prints the binary
* @b: number
*
* by: lailitaa
* Return: void
*/
void print_binary(unsigned long int n)
{
	int cmp, c = 0;
	unsigned long int current;

	for (cmp = 63; cmp >= 0; cmp--)
	{
		current = n >> cmp;

		if (current & 1)
		{
			_putchar('1');
			c++;
		}
		else if (c)
			_putchar('0');
	}
	if (!c)
		_putchar('0');
}
