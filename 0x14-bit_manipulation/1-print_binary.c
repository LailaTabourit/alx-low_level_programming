#include "main.h"

/**
* binary_to_uint - prints the binary
* @b: number
*
* by: lailitaa
* Return: void
*/
unsigned int binary_to_uint(const char *b)
{
	int cmp;
	unsigned int val = 0;

	if (!b)
		return (0);

	for (cmp = 0; b[cmp]; cmp++)
	{
		if (b[cmp] < '0' || b[cmp] > '1')
			return (0);
		val = 2 * val + (b[cmp] - '0');
	}

	return (val);
}
