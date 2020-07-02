#include "holberton.h"

/**
* is_prime - finds prime
* description: div
* @n: int
* Return: value
*/

int is_prime_number(int n)
{
int i = 2;
return (find_prime(n,i));
}

/**
* find_prime - find prime
* @i: int
* @n: int
* Return: value
*/

int find_prime(int n, int i)
{
if (n <= 2)
return (0);
else if (n % i == 0)
return (0);
else if (i * i > n)
return (1);
else
return (find_prime(n, i + 1));
}
