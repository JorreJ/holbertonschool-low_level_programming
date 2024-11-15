#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include "../pointers_arrays_strings/2-strlen.c"
#include "../pointers_arrays_strings/9-strcpy.c"

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog (Success), or NULL (fail)
 */

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dog2;
dog2 = malloc(sizeof(dog_t));
if (dog2 == NULL)
{
return (NULL);
}
(*dog2).name = malloc(sizeof(char) * _strlen(name) + 1);
if ((*dog2).name == NULL)
{
free(dog2);
return (NULL);
}
(*dog2).owner = malloc(sizeof(char) * _strlen(owner) + 1);
if ((*dog2).owner == NULL)
{
free((*dog2).name);
free(dog2);
return (NULL);
}
_strcpy((*dog2).name, name);
_strcpy((*dog2).owner, owner);
(*dog2).age = age;
return (dog2);
}
