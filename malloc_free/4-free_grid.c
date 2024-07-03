#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Libera espacio para una cuadricula bidimensional
 * @grid: matriz bidimensional creada en el ejercicio tres
 * @height: alto de la cuadricua
 * Return: 0
 */
void free_grid(int **grid, int height)
{
	int a;

	if (grid == NULL)
	{
		return;
	}

	for (a = 0; a < height; a++)
	{
		free(grid[a]);
	}
	free(grid);
}
