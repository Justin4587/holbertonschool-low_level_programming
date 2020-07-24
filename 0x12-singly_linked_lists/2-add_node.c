#include "lists.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

/**
* add_node - function
* description: print
* @h: lists
* Return: size
*/

list_t *add_node(list_t **head, const char *str)
{
list_t *temp;
unsigned int i = 0;

temp = malloc(sizeof(list_t));
if(temp == NULL)
{
return(NULL);
}
temp->str = strdup(str);
while(str[i] != NULL)
{
i++;
}
temp->len = i;
*head = temp;
return (temp);
}
