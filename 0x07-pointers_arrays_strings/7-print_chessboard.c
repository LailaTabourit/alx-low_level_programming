#include "main.h"
#include <stdio.h>
/**
 * print_chessboard - a function that print chessboard
 * @a: two dim array
 * Return: Void return nothing
 */

void print_chessboard(char (*a)[8])
{
	int i, j;
	int column = sizeof((a)[0]);
	int total = sizeof(a) * column;
	int row = total / column;

	for (i = 0; i < row; i++)
	{
		for (j = 0; j < column; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
