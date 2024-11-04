#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: memory area to be fill
 * @b: char to copy
 * @n: number of times to copy b
 * Return: pointer to the memory s
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int l;
for (l = 0; l < n; l++)
{
s[l] = b;
}
return (s);
}
