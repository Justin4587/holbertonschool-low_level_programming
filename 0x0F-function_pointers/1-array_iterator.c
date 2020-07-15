#include "function_pointers.h"
#include <stdlib.h>
#include <stddef.h>
/**
* array_iterator - function
* description: print num
* @action: print
* @array: array
* Return: void
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;
 size_t *pnt = &size;


if (array == NULL)
{
return;
}
if (action == NULL)
{
return;
}
if (pnt == NULL)
{
return;
}
for (i = 0; i < size; i++)
action(array[i]);
}
