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
unsigned int count1 = 0;
unsigned int count2 = 0;
unsigned int i;
unsigned int j;
char *dup;


if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

while (s1[count1] != '\0')
count1++;
while (s2[count2] != '\0')
count2++;

if (count2 <= n)
{
dup = malloc((sizeof(char)) * (count1 + count2 + 1));
}
if (count2 > n)
{
dup = malloc((sizeof(char)) * (count1 + n + 1));
}  	     
if (dup == NULL)
return (NULL);

for (i = 0; i < count1 ; i++)
dup[i] = s1[i];

if (count2 < n)
{
for (j = 0; j <= count2 ; j++)
dup[j + i] = s2[j];
}

if (count2 >= n)
for (j = 0; j <= n ; j++)
dup[j + i] = s2[j];

return (dup);
}
