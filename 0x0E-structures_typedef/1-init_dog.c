#include "dog.h"

/**
* init_dog - print compile file
* description: dog stuff
* @name: name of pet
* @age: age
* @owner: name of owner
* @d: pointer
*/

void init_dog(struct dog *d, char *name, float age, char *owner)

{
if (d)
{
d->name = name;
d->age = age;
d->owner = owner;
}

}
