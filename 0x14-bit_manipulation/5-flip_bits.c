#include "main.h"

/**
* flip_bits - returns the numbers of bits
* @n: number
* @m: number
*
* by: lailitaa
* Return: number of bits
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int count, c = 0;
	unsigned long int current;
	unsigned long int ex = n ^ m;

	for (count = 63; count >= 0; count--)
	{
		current = ex >> count;
		if (current & 1)
			c++;
	}
	return (c);
}
