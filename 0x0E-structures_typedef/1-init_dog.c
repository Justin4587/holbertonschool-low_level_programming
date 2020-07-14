#include "dog.h"

/**
* struct dog - print compile file
* description: dog stuff
* @name: name of pet
* @age: age
* @owner: name of owner
*/

void init_dog(struct dog *d, char *name, float age, char *owner)

{

d->name = name;
d->age = age;
d->owner = owner;


}
