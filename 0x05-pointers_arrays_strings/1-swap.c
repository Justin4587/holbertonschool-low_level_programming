#include "holberton.h"

/**
* swap_int - swap two ints
* description: swap a with b 
* @a: int
* @b: int
* Return: 0
*/

void swap_int(int *a, int *b)
{
int i = *a;

*a = *b;
*b = i;

return;
}
