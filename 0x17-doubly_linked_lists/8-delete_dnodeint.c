#include "lists.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

/**
* delete_dnodeint_at_index - function
* description: print
* @head: lists
* @index: position
* Return: void
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *pnt = *head, *pre, *nxt;
unsigned int n = 0;

while (n < index)
{
if (pnt == NULL)
return (-1);
pnt = pnt->next;
n++;
}
if (pnt == NULL)
return (-1);
pre = pnt->prev;
nxt = pnt->next;
if (pre)
pre->next = nxt;
else
*head = nxt;
if (nxt)
nxt->prev = pre;

free(pnt);

return (1);
}
