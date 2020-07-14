#include "dog.h"
#include <stdio.h>

/**
* new_dog - print compile file
* description: dog stuff
* @name: name of pet
* @age: age
* @owner: name of owner
* Return: NULL if fail
*/

dog_t *new_dog(char *name, float age, char *owner)
{
  int n;
  int o;
  dog_t *d;
  char *new_name;
  char *new_owner;

  d = malloc(sizeof(dog_t));
  if (d == NULL)
    return (NULL);

  for (n = 0; name[n]; n++);
  new_name = malloc(sizeof(char) * n + 1);
  if (new_name == NULL)
    return (NULL);

  for (o = 0; owner[o]; o++);
  new_owner = malloc(sizeof(char) * o + 1);
  if (new_owner == NULL)
    return (NULL);

  new_name = name;
  new_owner = owner;
  
  return (d);
}
