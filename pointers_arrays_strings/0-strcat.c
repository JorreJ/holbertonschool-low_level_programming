#include "main.h"
#include "2-strlen.c"
#include <stdio.h>

/**
 * _strcat - concatenates two strings
 * @dest: string to append to
 * @src: string to add
 *
 * Return: a pointer to the resulting string
 */

char *_strcat(char *dest, char *src)
{
int lend, lens, l, a;
lend = _strlen(dest);
lens = _strlen(src);
l = lend;
for (a = 0; a <= lens; a++)
{
dest[l] = src[a];
l++;
}
dest[l] = '\0';
return (dest);
}
