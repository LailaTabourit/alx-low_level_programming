#include "main.h"

int prime_recursion(int n, int i);

/**
* is_prime_number - a function that says if a number is prime or not
* @n: variable input
*
* By: laila tabourit
*
* Return: 1 if n is prime, 0 if not
*/

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime_recursion(n, n - 1));
}
/**
* prime_recursion - a function that if a numb is prime
* @n: number evaluated
* @i: number of iteration
*
* by: laila tabourit
*
* Return: 1 if n is prime, 0 if not
*/

int prime_recursion(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (prime_recursion(n, i - 1));
}
