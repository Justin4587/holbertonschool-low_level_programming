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
    int store[1024], i, k;

k = n;

    for (i = 0; i < n; i++, k--)
    store[i] = a[k];

    for (i = 0; i < n; i++)
    store[i] = a[i];


    return;
}