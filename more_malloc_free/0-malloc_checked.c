#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocate memory
 * @b: size of memory to allocate
 *
 * Return: pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
void *p;
p = malloc(b);
if (p == NULL)
{
exit(98);
}
return (p);
}
