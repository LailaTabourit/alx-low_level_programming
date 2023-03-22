#include <stdio.h>
#include "main.h"
/**
*print_to_98 - prints all natural numbers from n to 98
*@n: first number
*Return: return all natural numbers from n to 98
*/
void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d, ", i);
		}
	}
	else if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			 printf("%d, ", i);
		}
	}
}
