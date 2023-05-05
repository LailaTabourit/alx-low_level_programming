#include "main.h"

/**
* get_endiasanness - check the endianness
* by: lailitaa
* Return: 0
*/

int get_endianness(void)
{
	unsigned int count = 1;
	char *c = (char *) &count;

	return (*c);
}

