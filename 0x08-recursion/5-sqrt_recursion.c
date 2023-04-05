#include "main.h"

int sqrt_recursion(int n, int i);

/**
* _sqrt_recursion - return natural square of number
* @n: number
*
* by: laila tabourit
* Return: the result square
*/

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqrt_recursion(n, 0));
}

/**
* sqrt_recursion - a function that find the natural square root of a number
* @n: number to calc the square root of i
* @i: number of iteration
*
* by: laila tabourit
* Return: the resulting square root
*/

int sqrt_recursion(int n, int i)
{
	if (i * i == n)
		return (i);
	return (sqrt_recursion(n, i + 1));
}
