#include "main.h"
#include <stdio.h>

/**
 * print_array - a function that print n elem of array
 * @a: pointer variable
 * @n: variable
 * Return: void return nothing
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == 0)
		{
			printf("%d", a[i]);
		}
		else
		{
			printf(", %d", a[i]);
		}
	}
	printf("\n");
}
