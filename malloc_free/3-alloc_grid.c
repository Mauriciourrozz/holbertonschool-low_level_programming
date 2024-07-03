#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * alloc_grid - devuelve un puntero a una matriz
 * @width: ancho de una cadena
 * @height: largo de una cadena (hacia abajo)
 * Return: grid
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int a;
	int b;
	int i;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
	{
		return (NULL);
	}

	for (a = 0; a < height; a++)
	{
		grid[a] = malloc(width * sizeof(int));
		if (grid[a] == NULL)
		{
			for (i = 0; i < a; i++)
			{
				free(grid[i]);
			}
			free(grid);
			return (NULL);
		}

		for (b = 0; b < width; b++)
		{
			grid[a][b] = 0;
		}
	}
	return (grid);
}
