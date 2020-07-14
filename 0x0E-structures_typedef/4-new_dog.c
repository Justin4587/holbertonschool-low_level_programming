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


d = malloc(sizeof(dog_t));
if (d == NULL)
{
free(d);
return (NULL);
}
for (n = 0; name[n]; n++)
d->name = malloc(sizeof(char) * n + 1);
if (d->name == NULL)
{
free(d->name);
free(d);
return (NULL);
}
for (o = 0; owner[o]; o++)
d->owner = malloc(sizeof(char) * o + 1);
if (d->owner == NULL)
{
free(d->owner);
free(d->name);
free(d);
return (NULL);
}
for (n = 0; name[n]; n++)
d->name[n] = name[n];
d->name[n] = '\0';

for (o = 0; owner[o]; o++)
d->owner[o] = owner[o];
d->owner[o] = '\0';

d->age = age;

return (d);
}
