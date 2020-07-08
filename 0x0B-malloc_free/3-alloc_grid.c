#include "holberton.h"

/**
* **alloc_grid - make 2d grid
* description: make 2d array
* @width: int
* @height: int
* Return: value or error
*/

int **alloc_grid(int width, int height)
{
int *grid;


if (width > 1 && height > 1)
grid = malloc((sizeof(int) * (width * height));
if (grid == NULL)
return (NULL);
int grid[width][height];
return (grid);
}
