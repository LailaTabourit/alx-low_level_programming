
#include "main.h"

/**
 * reverse_array - a function that reverse an array
 * @a: pointer variable
 * @n: variable size of a
 * Return: Always *a when Success
 */

void reverse_array(int *a, int n)
{
	int cup = 0, i, j;

	j = n - 1;

	for (i = 0; i < n / 2; i++)
	{
		cup = a[i];
		a[i] = a[j];
		a[j] = cup;
		j--;
	}

}

