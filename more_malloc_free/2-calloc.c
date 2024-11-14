#include "main.h"
#include <stdlib.h>
#include "../pointers_arrays_strings/0-memset.c"

/**
 * _calloc - allocate memory for an array
 * @nmemb: number of elements
 * @size: size of an element
 *
 * Return: pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
char *m;
if (nmemb == 0 || size == 0)
{
return (NULL);
}
m = malloc(size * nmemb);
if (m == NULL)
{
return (NULL);
}
_memset(m, 0, nmemb * size);
return (m);
}
