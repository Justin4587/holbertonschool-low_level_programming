#include "holberton.h"
/**
 * _strcmp - compares two strings
 * @s1: string 1
 * @s2: string 2
 * Return: 1 if match, -1 if not
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
int dif = 0;

while (s1[i] != '\0')
{
if (s1[i] != s2[i])
{
dif = s1[i] - s2[i];
return (dif);
}
i++;
}
return (0);
}
