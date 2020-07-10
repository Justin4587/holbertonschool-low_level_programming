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
unsigned int count1 = 0, count2 = 0;
char *dup;

if (s1 != NULL)
while (s1[count1] != '\0')
count1++;
dup = malloc(((sizeof(char) * count1) +(sizeof(char) * n) + 1));
if (dup == NULL)
{
free(dup);
return (NULL);
}
if (s1 != NULL)
for (count1 = 0; s1[count1] != '\0'; count1++)
dup[count1] = '\0';
if (s2 != NULL)
for (count2 = 0; count2 < n; count2++)
{dup[count1] = s2[count2];
count1++;
}
dup[count1] = '\0';
return (dup);
}
