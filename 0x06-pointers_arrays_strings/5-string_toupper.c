#include "holberton.h"

/**
 * string_toupper - concatenates two strings
 * @n: bytes to cat
 * Return: dest string
 */


char *string_toupper(char *n)
{
int i = 0;

for (i = 0; n[i] != '\0'; i++)
{
if (n[i] >= 'a' && n[i] <= 'z')
{
n[i] = n[i] - 32;
}
}
return (n);
}
