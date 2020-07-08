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

if (str == NULL)
return (NULL);

while (str[counter] != '\0')
counter++;

if (counter >= 1)
dup = malloc((sizeof(char)) * (counter + 1));
if (dup == NULL)
return (NULL);
dup[counter + 1] = '\0';
while (counter != 0)
{
dup[counter] = str[counter];
counter--;
}
return (dup);
}
