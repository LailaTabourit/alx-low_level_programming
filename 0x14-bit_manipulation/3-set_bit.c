#include "main.h"

/**
* set_bit -sets value of a bit
* @n: number
* @index: index
* by: lailitaaa
* Return: 1 if it worked, or  -1 if an error occured
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = ((1UL << index) | *n);
	return (1);
}
