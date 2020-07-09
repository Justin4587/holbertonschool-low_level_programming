#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char *concat;

    concat = string_nconcat("LETS JUST PUT A LITTLE SOMETHING ON THIS SIDE", "FFUUCCKK", 4);
    printf("%s\n", concat);
    free(concat);
    return (0);
}
