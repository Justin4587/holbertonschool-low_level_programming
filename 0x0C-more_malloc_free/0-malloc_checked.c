#include "holberton.h"
#include <stdlib.h>

/**
* *malloc_checked - malloc checker
* description: use unsigned int in malloc
* @b: unsigned int
* Return: ptr or 98
*/

void *malloc_checked(unsigned int b)
{
void *ptr;

ptr = malloc(b);
if (ptr == NULL)
{
free(ptr);
exit(98);
}
return (ptr);
}
