#include "holberton.h"

/**
* _strchr - write value to buffer
* description: take a value and write to buffer n times
* @s: location being appended
* @c: location to pull from
* Return: pointer *dest
*/

char *_strchr(char *s, char c)
{
while (*s != c && *s != '\0')
s++;
if (*s == c)
return (s);
else
return (0);
}
