#include "holberton.h"

/**
* _strpbrk - write value to buffer
* description: take a value and write to buffer n times
* @s: location being appended
* @accept:char to look for
* Return: char str
*/

char *_strpbrk(char *s, char *accept)
{
int i = 0, j;

while (s[i] != '\0')
{
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
return (&s[i]);
}
i++;
}
return (0);
}
