#include "lists.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

/**
* add_node_end - function
* description: print
* @head: lists
* @str: string
* Return: size
*/

list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_end, *tail;
unsigned int i = 0;

 new_end = malloc(sizeof(list_t));

 if(new_end == NULL)
   {
     return(NULL);
   }
 new_end->str = strdup(str);

 while(str[i] != '\0')
   {
     i++;
   }
 new_end->len = i;

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
