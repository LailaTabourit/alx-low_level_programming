#include "main.h"

/**
*_pow_recursion - a function that gets x power y
* @x: value of raise
* @y: value of power
*
* by: laila tabourit
* Return: result of the power
*/

int _pow_recursion(int x, int y)
{

	if (y == 0)
		return (1);
	if (y < 0)
		return (-1);

	return (x * _pow_recursion(x, y - 1));
}
