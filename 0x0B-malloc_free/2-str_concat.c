#include "holberton.h"

/**
* str_concat - str array
* description: append array
* @s1: str to append
* @s2: str to append
* Return: value of error
*/


char *str_concat(char *s1, char *s2)
{
int count1 = 0;
int count2 = 0;
int i;
int j;
char *dup;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

while (s1[count1] != '\0')
count1++;
while (s2[count2] != '\0')
count2++;

dup = malloc(sizeof(char) * (count1 + count2 + 1));

if (dup == NULL)
return (NULL);

for (i = 0; i < count1 ; i++)
dup[i] = s1[i];

for (j = 0; j <= count2 ; j++)
dup[j + i] = s2[j];

return (dup);
}
