#include <stdlib.h>
#include <stdio.h>
#include "main.h"
#include <string.h>

/**
* alloc_grid - allocate 2d arrays
* @width: grid's columns
* @height: grid's rows
*
* by : laila tabourit
* Return: pointer to grid,or NULL if any error
*/

int **alloc_grid(int width, int height)
{
	int **c;
	int k, i, j;

	if (width < 1 || height < 1)
		return (NULL);

	c = (int **) malloc(height * sizeof(int *));
	if (c == NULL)
	{
		free(c);
		return (NULL);
	}
	for (k = 0; k < height; k++)
	{
		c[k] = (int *) malloc(width * sizeof(int));
		if (c[k] == NULL)
		{
			for (; k >= 0; k--)
				free(c[k]);
			free(c);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			c[i][j] = 0;
		}
	}

	return (c);
}

