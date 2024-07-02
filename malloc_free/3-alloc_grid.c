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

	if (width <= 0)
	{
		return (NULL);
	}
	if (height <= 0)
	{
		return (NULL);
	}

	grid = malloc(height * sizeof(int*));
	if (grid == NULL)
	{
		return (NULL);
	}

	for (a = 0; a < height; a++)
	{
		for (b = 0; b < height; b++)
		{
			grid[a] = malloc(width * sizeof(int));
			grid[a][b] = 0;
		}
	}
	return (grid);
}

