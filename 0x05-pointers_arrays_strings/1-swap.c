#include "main.h"

/**
 * swap_int - a function that swap value of two pointer
 * @a: pointer variable one
 * @b: pointer variable two
 * Return: void return nothing
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
