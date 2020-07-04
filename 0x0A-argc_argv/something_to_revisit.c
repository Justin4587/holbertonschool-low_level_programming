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
  int counter;
  counter = 0;

while (argc--)
  counter + 1;

 if (counter == 0)
   printf("%d", counter);

return (0);
}
