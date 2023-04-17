#include <stdlib.h>
#include "dog.h"

/**
* _strlen - return the length of string
* @s: string
*
* by: lailitaa
* Return: length of string
*/
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}

/**
* *_strcpy - copy the string
* @b: pointer we want to copy
* @a: string to be copied
*
* by: lailitaaaaaaaa
* Return: pointer
*/
char *_strcpy(char *b, char *a)
{
	int len, i;

	len = 0;

	while (a[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < len; i++)
	{
		b[i] = a[i];
	}
	b[i] = '\0';

	return (b);
}

/**
* new_dog -new a dog
* @name: dog's name
* @age: dog's age
* @owner: dog's owner
*
* by: lailitaaa
* Return: pointer
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int len1, len2;

	len1 = _strlen(name);
	len2 = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (len1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (len2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
