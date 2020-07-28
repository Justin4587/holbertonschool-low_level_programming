#include "lists.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

/**
* add_nodeint_end - function
* description: print
* @head: lists
* @n: string
* Return: size
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new_end, *tail;


new_end = malloc(sizeof(listint_t));

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
return (new_end);
}
