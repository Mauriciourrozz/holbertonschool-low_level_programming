#include "main.h"
#include <stdlib.h>
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

	if (width <= 0)
	{
		return (NULL);
	}
	if (height <= 0)
	{
		return (NULL);
	}

	grid = malloc(width * sizeof(int));

	if (grid == NULL)
	{
		return (NULL);
	}

	for (a = 0; a < width; a++)
	{
		grid[a] = malloc(height * sizeof(int));
	}

	return (grid);
}
