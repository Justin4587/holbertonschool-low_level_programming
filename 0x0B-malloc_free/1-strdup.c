#include "holberton.h"

/**
* *_strdup - str array
* description: duplicate array
* @str: str to dup
* Return: value or error
*/

char *_strdup(char *str)
{

char *dup;
int counter = 0;

{
while (str[counter] != '\0')
counter++;



if (counter >= 1)
dup = malloc((sizeof(char)) * counter);
if (dup == NULL)
return (NULL);
while (counter != 0)
{
counter--;
dup[counter] = str[counter];
}
}
return (dup);
}
