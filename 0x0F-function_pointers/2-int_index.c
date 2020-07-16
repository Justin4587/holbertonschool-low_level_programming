#include "function_pointers.h"
#include <stdlib.h>
#include <stddef.h>
/**
* int_index - function
* description: num
* @cmp: pnt
* @array: array
* @size: int
* Return: int
*/

int int_index(int *array, int size, int (*cmp)(int))
{
int i = 0;

if (size <= 0)
{
return(-1);
}
if (array == NULL)
{
return(-1);
}
if (cmp == NULL)
{
return(-1);
}
while (i < size)
{
if (cmp(array[i]) != 0)
{
return(i);
}
i++;
}
return (-1);
}
