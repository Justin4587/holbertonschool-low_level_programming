#include "holberton.h"

/**
* _memset - write value to buffer
* description: take a value and write to buffer n times
* @n: number of times to write
* @s: location to write
* @b: what to write
* Return: pointer s
*/

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
