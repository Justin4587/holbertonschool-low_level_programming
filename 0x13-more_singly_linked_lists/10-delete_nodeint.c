#include "lists.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

/**
* delete_nodeint_at_index - function
* description: print
* @head: lists
* @index: position
* Return: void
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *pnt = *head;
unsigned int n = 0;

while (n < index)
{
*head = pnt->next;
n++;   
}
free(*head);

return (1);
}
