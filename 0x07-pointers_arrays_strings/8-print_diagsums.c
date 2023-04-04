#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - function that prints the sum of the two diagonals
 *@a: first value -char
 *@size: second value -int
 */
void print_diagsums(int *a, int size)
{
	int i;
	int diag = 0, diag1 = 0;

	for (i = 0; i < size; i++)
	{
		diag +=  a[(size * i) + i];
		diag1 += a[(size * (i + 1)) - (i + 1)];
	}

	printf("%d, %d\n", diag, diag1);
}
