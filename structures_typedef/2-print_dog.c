#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - print a struct dog
 * @d: struct dog to print
 */

void print_dog(struct dog *d)
{
if (d == NULL)
{
return;
}
if ((*d).name == NULL)
{
(*d).name = "(nil)";
}
if ((*d).owner == NULL)
{
(*d).owner = "(nil)";
}
printf("Name: %s\n", (*d).name);
printf("Age: %f\n", (*d).age);
printf("Owner: %s\n", (*d).owner);
}
