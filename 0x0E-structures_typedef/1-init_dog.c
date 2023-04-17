#include "dog.h"
#include <stdlib.h>
/**
* init_dog - initialize a variable
* @d: type struct
* @name: first member
* @age : second member
* @owner: third member
*
* by: lailitaaaa
**/

void init_dog(struct dog *d, char *name, float age, char *owner)
{

	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;

}
