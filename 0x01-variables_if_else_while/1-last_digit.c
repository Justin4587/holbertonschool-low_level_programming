#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - time determined variable number output
* description: if then program
* Return: 0
*/

int main(void)
{
	int n;
	int o;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	o = (n % 10);
	printf("Last digit of %d is %d ", n, o);
if (o > 5)
{
printf("and is greater than 5\n");
}
if (o == 0)
{
	printf("and is 0\n");
	}
if (o < 6 && o != 0)
{
	printf("and is less than 6 and not 0\n");
	}
	return (0);
}
