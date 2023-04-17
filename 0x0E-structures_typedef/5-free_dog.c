#include "dog.h"

/**
* free_dog - free memory
* @d: struct dog
*
* by : lailitaa
*/
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}

