#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string
 * by: lailitaa
 *
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	int count;
	unsigned int val = 0;

	if (!b)
		return (0);

	for (count = 0; b[count]; count++)
	{
		if (b[count] < '0' || b[count] > '1')
			return (0);
		val = 2 * val + (b[count] - '0');
	}
	return (val);
}
