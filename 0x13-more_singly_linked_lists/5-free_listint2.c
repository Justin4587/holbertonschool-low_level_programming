#include "lists.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

/**
* free_listint2 - function
* description: print
* @head: lists
* Return: void
*/

void free_listint2(listint_t **head)
{
listint_t *pnt;
listint_t *pntr;
pnt = *head;


while (pnt != NULL)
{
pntr = pnt->next;
free(pnt);
pnt = pntr;
*head = NULL;
}
return;
}
