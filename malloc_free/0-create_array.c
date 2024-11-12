#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of char
 * and initializes it with a specific char
 * @size: size of the array to create
 * @c: char to initialize the array c
 *
 * Return: pointer to the array (Success), NULL (Error)
 */

char *create_array(unsigned int size, char c)
{
char *ar;
unsigned int l;
if (size == 0)
{
return (NULL);
}
ar = malloc(size * sizeof(char));
ar[0] = c;
if (ar == NULL)
{
return (NULL);
}
for (l = 0; l <= size; l++)
{
*(ar + l) = c;
}
return (ar);
}
