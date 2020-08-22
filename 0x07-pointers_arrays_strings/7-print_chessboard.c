#include "holberton.h"

/**
* print_chessboard - write value to buffer
* description: take a value and write to buffer n times
* @a: location being appended
* Return: void
*/

void print_chessboard(char (*a)[8])
{
int i, j;

for (i = 0; i < 8; i++)
{
for (j = 0; j < 8; j++)
_putchar(a[i][j]);
_putchar('\n');
}
}
