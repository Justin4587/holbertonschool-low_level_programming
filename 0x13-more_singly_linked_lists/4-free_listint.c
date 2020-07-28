#include "lists.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

/**
* free_listint - function
* description: print
* @head: lists
* Return: void
*/

void free_listint(listint_t *head)
{

while (head != NULL)
{
free(head);
head = head->next;
}
return;
}
