#include "main.h"
#include "2-strlen.c"

/**
 * *_strcpy - copies the string pointed to by src
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest
 * @dest: pointer to the buffer in which we copy the string
 * @src: string to be copied
 *
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
int len;
int l;
len = _strlen(src);
for (l = 0; l < len; l++)
{
dest[l] = src[l];
}
dest[l] = '\0';
return (dest);
}
