#include "lists.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

/**
* add_dnodeint_end - function
* description: print
* @head: lists
* @n: string
* Return: size
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new_end, *tail = *head;


new_end = malloc(sizeof(dlistint_t));

if (new_end == NULL)
return (NULL);

new_end->n = n;
new_end->next = NULL;

while (tail && tail->next)
tail = tail->next;
new_end->prev = tail;
if (tail != NULL)
tail->next = new_end;
else
*head = new_end;


return (new_end);
}
