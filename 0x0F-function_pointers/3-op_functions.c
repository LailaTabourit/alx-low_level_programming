#include "3-calc.h"
#include <stdlib.h>

/**
* op_add - add two numbers
* @a: number 1
* @b: number 2
*
* by:laililtaaaaaaa
* Return: sum of two numbers
*/

int op_add(int a, int b)
{
	return (a + b);
}

/**
* op_sub - gets the difference of a et b
* @a: number 1
* @b: number 2
*
* by: lailitaa
* Return: the difference
*/
int op_sub(int a, int b)
{
	return (a - b);
}
/**
* op_mul - multiplies a et b
* @a: number 1
* @b: number 2
*
* by: lailitaa
* Return: multiplication
*/
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides @a by @b
 *
 * @a: input 1
 * @b: input 2
 * by: lailitaa
 * Return: results of the division @a and @b
*/
int op_div(int a, int b)
{
	return (a / b);
}
/**
* op_mod - gets the reminder of the division
* @a: number 1
* @b: number 2
*
* Return: the reminder
*/
int op_mod(int a, int b)
{
	return (a % b);
}
