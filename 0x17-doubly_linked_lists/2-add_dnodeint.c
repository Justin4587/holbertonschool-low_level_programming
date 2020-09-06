#include "lists.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

/**
* add_dnodeint - function
* description: print
* @head: pointer
* @n: int
* Return: size
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *temp;

if (head == NULL)
return (NULL);

temp = malloc(sizeof(dlistint_t));
if (temp == NULL)
{
return (NULL);
}

temp->n = n;


temp->next = *head;
temp->prev = NULL;
if (*head != NULL)
{
(*head)->prev = temp;
}
*head = temp;
return (temp);
}
