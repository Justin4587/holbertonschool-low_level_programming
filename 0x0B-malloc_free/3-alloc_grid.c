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
int **grid;
int tall;
int wide;

if (width <= 0 || height <= 0)
return (NULL);
grid =(int **)malloc(sizeof(int *) * height);
if(grid == NULL)
return (NULL);
for (tall = 0; tall < height; tall++)
{
grid[tall] =(int *)malloc(sizeof(int) * width);
if(grid == NULL)
return (NULL);
for (wide = 0; wide < width; wide++)
grid[tall][wide] = 0;
}
return (grid);
}
