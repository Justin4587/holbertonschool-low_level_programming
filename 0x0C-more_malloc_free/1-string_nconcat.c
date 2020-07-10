#include "holberton.h"

/**
* string_nconcat - concat
* description: append array
* @s1: str to append
* @s2: str to append
* @n: uns int
* Return: value of error
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int count1, count2;
char *dup;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
for (count1 = 0; s1[count1]; count1++)
;
for (count2 = 0; count2 < n; count2++)
;
dup = malloc(sizeof(char) * count1 + count2 + 1);
if (dup == NULL)
return (NULL);
for (count1 = 0; s1[count1]; count1++)
dup[count1] = s1[count1];
for (count2 = 0; count2 < n && s2[count2]; count2++, count1++)
dup[count1] = s2[count2];
dup[count1] = '\0';
return (dup);
}
