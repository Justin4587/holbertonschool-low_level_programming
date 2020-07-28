#include "lists.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

/**
* add_nodeint - function
* description: print
* @head: pointer
* @n: int
* Return: size
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *temp;

temp = malloc(sizeof(listint_t));
if (temp == NULL)
{
return (NULL);
}
temp->n = n;
temp->next = *head;
*head = temp;
return (temp);
}
