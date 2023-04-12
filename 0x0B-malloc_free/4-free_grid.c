#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
* free_grid - free allocated 2D array of integers
* @grid: 2D array
* @height: grid rows
*
* by: laila tabourit
* Return: nothing
*/
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}

