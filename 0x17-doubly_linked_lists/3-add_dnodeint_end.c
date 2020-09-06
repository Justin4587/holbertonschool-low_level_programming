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
dlistint_t *new_end, *tail;


new_end = malloc(sizeof(dlistint_t));

if (new_end == NULL)
{
return (NULL);
}
new_end->n = n;

new_end->next = NULL;

if (*head == NULL)
*head = new_end;

else
{
tail = *head;
while (tail->next != NULL)
{
tail = tail->next;
}
tail->next = new_end;
}
new_end->prev = tail;
return (new_end);
}
