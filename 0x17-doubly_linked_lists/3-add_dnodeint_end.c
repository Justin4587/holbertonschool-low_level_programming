#include "lists.h"

/**
 * add_dnodeint_end - traverses linked list
 * description: prints ints in list
 * @n: list
 * @head: head of list
 * Return: size of list
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new, *list = *head;

if (head == NULL)
return (NULL);

new = malloc(sizeof(dlistint_t));

if (new == NULL)
return (NULL);

new->n = n;
new->next = NULL;

while (list && list->next)
list = list->next;

new->prev = list;

if (list != NULL)
list->next = new;
else
*head = new;

return (new);
}
