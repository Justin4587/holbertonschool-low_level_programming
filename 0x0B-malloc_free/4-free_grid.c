#include "holberton.h"

/**
* free_grid - free malloc
* description: free grid
* @grid: int
* @height: int
* Return: value or error
*/

void free_grid(int **grid, int height)
{
int tall;

for (tall = height; tall >= 0; tall--)
{
free(grid[tall]);
}
free(grid);
return;
}
