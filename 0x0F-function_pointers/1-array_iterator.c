#include "function_pointers.h"
#include <stdlib.h>

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

if (array == NULL)
{
return;
}
if (action == NULL)
{
return;
}
for (i = 0; i <= size; i++)
action(array[i]);
}
