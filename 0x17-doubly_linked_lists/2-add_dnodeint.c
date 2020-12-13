#include "lists.h"

/**
 * add_dnodeint - traverses linked list
 * description: prints ints in list
 * @n: list
 * @head: head of list
 * Return: size of list
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new;

if (head == NULL)
return (NULL);

new = malloc(sizeof(dlistint_t));

if (new == NULL)
return (NULL);

new->n = n;
new->next = *head;
new->prev = NULL;

if (*head != NULL)
(*head)->prev = new;

*head = new;
return (new);
}
