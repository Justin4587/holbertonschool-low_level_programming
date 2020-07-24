#include "lists.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

/**
* free_list - function
* description: print
* @head: lists
* Return: void
*/

void free_list(list_t *head)
{

while (head != NULL)
{
free(head->str);
free(head);
head = head->next;
}
return;
}
