#include "holberton.h"
/**
 * rot13 - compares two strings
 * @s: string 1
 * Return: s
 */

char *rot13(char *s)
{
int i, j;
char str[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char ptr[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; str[j] != '\0'; j++)
{
if (s[i] == str[j])
{
s[i] = ptr[j];
break;
}
}
}
return (s);
}
