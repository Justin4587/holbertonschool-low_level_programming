#include "holberton.h"
#include <stdio.h>

/**
* print_diagsums - write value to buffer
* description: take a value and write to buffer n times
* @a: location being appended
* @size:char to look for
* Return: void
*/

void print_diagsums(int *a, int size)
{
int i, j, sum = 0, som = 0;
int mid[1000][1000];

for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
mid[i][j] = *a;
a++;
}
}
for (i = 0, j = 0; i < size; i++, j++)
sum = mid[i][j] + sum;
for (i = (size - 1), j = 0; i >= 0; i--, j++)
som = mid[i][j] + som;
printf("%d, ", sum);
printf("%d\n", som);
}