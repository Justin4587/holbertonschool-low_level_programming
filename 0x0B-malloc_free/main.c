#include "holberton.h"

/**
* *create_array - init array
* description: create array or error
* @size: size of array
* @c: char
* Return: value or error
*/

char *create_array(unsigned int size, char c)
{

char *p;

if (size >= 1)
{
p = malloc((sizeof(c)) * size);
if (p == NULL)
return (NULL);
}
while (size != 0)
{
p[size - 1] = c;
size--;
return (p);
}
}
