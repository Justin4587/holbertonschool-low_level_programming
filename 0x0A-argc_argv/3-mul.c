#include <stdio.h>
#include <stdlib.h>

/**
* main - prints name of prog
* description: prints arg
* @argc: arg counter
* @argv: arg var
* Return: 0
*/

int main(int argc, char *argv[])
{
  int a;
  int b;
  int c;

  if(argc != 3)
    {
    printf ("Error\n");
    return (1);
    }
  else
    {
      b = atoi(argv[1]);
  c = atoi(argv[2]);
    a = (b * c);
    printf("%d\n", a);
    }
return (0);
}
