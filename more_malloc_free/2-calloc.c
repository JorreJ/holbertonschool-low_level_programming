#include "main.h"
#include <stdlib.h>

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
int l;
if (nmemb == 0 || size == 0)
{
return (NULL);
}
m = malloc(size * nmemb);
if (m == NULL)
{
return (NULL);
}
for (l = 0; (unsigned int)l < nmemb; l++)
{
*(m + l) = 0;
}
return (m);
}
