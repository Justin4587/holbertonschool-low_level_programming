#include "dog.h"
#include <stdlib.h>

/**
* free_dog - print compile file
* description: dog stuff
* @d: pointer
*/

void free_dog(dog_t *d)

{
if (d)
free(d->name);
free(d->owner);
free(d);
}
