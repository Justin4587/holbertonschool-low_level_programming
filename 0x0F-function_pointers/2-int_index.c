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
unsigned int i;


if (array == NULL)
{
return;
}
if (size == NULL)
{
return;
}
for (i = 0; i < size; i++)
cmp(array[i]);
}
