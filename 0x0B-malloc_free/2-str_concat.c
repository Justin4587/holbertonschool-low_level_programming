#include "holberton.h"

/**
* *str_concat - str array
* description: append array
* @s1: str to append
* @s2: str to append
* Return: value or error
*/

char *str_concat(char *s1, char *s2)
{

char *dup;
int counter1 = 0;
int counter2 = 0;
int cnt = 0;

while (s1[counter1] != '\0')
counter1++;
while (s2[counter2] != '\0')
counter2++;
{
cnt = counter2 + counter1;
}
if (cnt >= 1 )
dup = malloc(sizeof(char) * (counter1 + counter2));
if (dup == NULL)
return (NULL);
while (counter2 != 0)
{
cnt--;
counter2--;
dup[cnt] = s2[counter2];
}
while (counter1 != 0)
{
counter1--;
dup[counter1] = s1[counter1];
}
return (dup);
}
