#include "main.h"
#include "2-strlen.c"

/**
 * _strncat - concatenates n bytes from a string to another
 * @dest: destination string
 * @src: source string
 * @n: number of bytes of str to concatenate
 *
 * Return: a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
int lend, l, a;
lend = _strlen(dest);
l = lend;
for (a = 0; a < n && src[a] != '\0'; a++)
{
dest[l] = src[a];
l++;
}
dest[l] = '\0';
return (dest);
}
