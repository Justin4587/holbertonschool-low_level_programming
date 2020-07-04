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
while (argc--)
printf("%s\n", *argv++);
return (0);
}
