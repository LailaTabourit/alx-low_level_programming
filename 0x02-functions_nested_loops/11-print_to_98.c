#include <stdio.h>
#include "main.h"
/**
 * main - Lists all the natural numbers from n to 98.
 *
 * Return: Always 0.
 */
void print_to_98(int n)
{
	int i;
	if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d, ", n);
		}
	}
	else
	{
                for (i = n; i >= 98; i--)
                {
                        printf("%d, ", n);
                }
        }
}
