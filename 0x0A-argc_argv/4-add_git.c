#include <stdio.h>
#include <stdlib.h>

/**
* main - prints name of prog
* description: prints arg
* @argc: arg counter
* @argv: arg var
* Return: 0
*/

int main(int argc, char **argv)
{
  int a;
  int b;

while (argc--)
  {
    b = atoi(*argv++);
    a = a + b;
  }
 {
   printf ("%d\n", a);
   }
return (0);
}
