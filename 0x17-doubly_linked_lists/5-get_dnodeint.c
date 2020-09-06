#include "lists.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

/**
* *get_dnodeint_at_index - function
* description: print
* @head: lists
* @index: position
* Return: size
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int counter = 0;

while (counter < index)
{
head = head->next;
counter++;
}
if (head == NULL)
return (NULL);
else
return (head);
}
