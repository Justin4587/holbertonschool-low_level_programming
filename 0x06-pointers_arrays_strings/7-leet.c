#include "holberton.h"
/**
 * leet - compares two strings
 * @n: string 2
 * Return:n
 */

char *leet(char *n)
{
int i, j;
char ptr[] = "aAeEoOtTlL";
char str[] = "4433007711";

for (i = 0; n[i] != '\0'; i++)
{
for (j = 0; j < 10; j++)
{
if (n[i] == ptr[j])
n[i] = str[j];
}
}
return (n);
}
