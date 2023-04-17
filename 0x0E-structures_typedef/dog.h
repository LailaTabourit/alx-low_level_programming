#ifndef STRUCT_DOG
#define STRUCT_DOG
#include <stdio.h>
#include <stdlib.h>

/**
* struct dog - structure
* @name: first member
* @age: second member
* @owner: third member
*
* by :lailitaaaaa
* Description: structure
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *h, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
