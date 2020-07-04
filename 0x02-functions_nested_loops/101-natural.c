#include "holberton.h"

/**
* main - numbers
* description: does some maths
* @n: int
* Return: 0
*/

int main(void)
{
int sum, n;

sum = 0;

for (n = 0; n < 1024; n++)
{
if (n % 3 == 0 || n % 5 == 0)
sum = sum + n;
}
printf("%d\n", sum);
return (0);
}	   
