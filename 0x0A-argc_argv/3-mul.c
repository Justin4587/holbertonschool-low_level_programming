#include <stdio.h>
#include <stdlib.h>

/**
* main - prints name of prog
* description: prints arg
* @argc: arg counter
* @argv: arg var
* Return: 0
*/

int main(int argc, char **argv[])
{
  int a;
  int b;
  int c;
  b = &argv[1];
  c = &argv[2];

  if(argc <= 2 && argc >= 4)
    {
    printf ("Error");
    }
  else
    {
    a = (b * c);
    printf("%d\n", a);
    }
return (0);
}
