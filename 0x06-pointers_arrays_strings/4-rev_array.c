#include "holberton.h"

/**
 * reverse_array - concatenates two strings
 * @a: destination string
 * @n: bytes to cat
 * free(dest);
 * Return: dest string
 */

void reverse_array(int *a, int n)
{
int store, i, j;

j = n - 1;

for (i = 0; i < j; i++, j--)
{
store = a[i];
a[i] = a[j];
a[j] = store;
}

return;
}
