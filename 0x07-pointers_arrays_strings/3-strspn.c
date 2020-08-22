#include "holberton.h"

/**
* _strspn - write value to buffer
* description: take a value and write to buffer n times
* @s: location being appended
* @accept: location to pull from
* Return: int
*/

unsigned int _strspn(char *s, char *accept)
{
int i, j;

for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; accept[j] != s[i]; j++)
{
if (accept[j] == '\0')
return (i);
}
}
return (i);
}
