#include "holberton.h"

/**
* _strstr - write value to buffer
* description: take a value and write to buffer n times
* @haystack: location being appended
* @needle:char to look for
* Return: char str
*/

char *_strstr(char *haystack, char *needle)
{
int i = 0, j = 0, k;
k = _strlen(needle);

while (haystack[i] != '\0')
{
if (haystack[i] == needle[j])
{
while (haystack[i] == needle[j])
{
if (j == k - 1)
{
k = i - j;
return ((char *) haystack + k);
}
j++;
i++;
}
}
i++;
}
return (0);
}
