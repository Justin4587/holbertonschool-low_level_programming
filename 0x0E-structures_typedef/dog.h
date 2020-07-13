#ifndef DOG_H
#define DOG_H

#include "holberton.h"

void init_dog(struct dog *d, char *name, float age, char *owner);

/**
* struct dog - print compile file
* description: dog stuff
* @name: name of pet
* @age: age
* @owner: name of owner
*/

struct dog
{
char *name;
float age;
char *owner;
};


#endif /* DOG_H */
