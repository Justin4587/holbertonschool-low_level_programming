#include "holberton.h"

/**
* _memcpy - write value to buffer
* description: take a value and write to buffer n times
* @dest: location being appended
* @src: location to pull from
* @n: int
* Return: pointer *dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}
