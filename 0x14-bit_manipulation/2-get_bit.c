#include "main.h"

/**
* get_bit - returns the value of a bit a given index
* @n: long int
* @index: unsigned int
*
* by: lailitaa
* Return: the value of the bit at index
*/
int get_bit(unsigned long int n, unsigned int index)
{
	int value;

	if (index > 63)
		return (-1);

	value = (n >> index) & 1;
		return (value);
}


