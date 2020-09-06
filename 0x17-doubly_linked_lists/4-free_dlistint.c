#include "lists.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

/**
* free_dlistint - function
* description: print
* @head: lists
* Return: void
*/

void free_dlistint(dlistint_t *head)
{
while (head != NULL)
{
free(head);
head = head->next;
}
return;
}
