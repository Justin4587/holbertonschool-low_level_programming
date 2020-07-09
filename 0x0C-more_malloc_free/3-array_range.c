#include "holberton.h"

/**
* *array_range - make array
* description: populated array
* @min: int
* @max: int
* Return: value or error
*/

int *array_range(int min, int max)
{
int *grid;
int i;

if (min > max)
return (NULL);

grid = malloc(sizeof(int) * ((max - min) + 1));
if (grid == NULL)
{
free(grid);
return (NULL);
}

for (i = 0; min <= max; i++, min++)
grid[i] = min;

return (grid);
}
