#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
* main - prints name of prog
* description: prints arg
* @argc: arg counter
* @argv: arg var
* Return: 0
*/

int main(int ac, char **av)
{
int a;
int b;
int i;

      b = atoi(*av++);
     a = a + b;
  
 printf ("%d\n", a);
 return (1);
}
