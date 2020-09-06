#include "lists.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
/**
* sum_dlistint - function
* description: print
* @head: lists
* Return: size
*/

int sum_dlistint(dlistint_t *head)
{
int sum = 0;


while (head != NULL)
{
sum += head->n;
head = head->next;
}
return (sum);
}
