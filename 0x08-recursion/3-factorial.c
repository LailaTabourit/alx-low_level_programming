#include "main.h"

/**
* factorial - a function that return factor of number
* @n: variable input
* by: laila tabourit
* Return: Factorial of n
*/

int factorial(int n)
{
	if (n == 0)
		return (1);
	if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
