#include "lists.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

/**
* pop_listint - function
* description: print
* @head: lists
* Return: void
*/

int pop_listint(listint_t **head)
{
listint_t *pnt = *head;
int n = 0;

n = pnt->n;

if (pnt != NULL)
{
*head = pnt->next;
free(pnt);
}
return (n);
}
