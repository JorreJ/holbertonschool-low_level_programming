#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - locates a character in a string
 * @s: string to search
 * @accept: string containing the bytes to look for
 *
 * Return: pointer to the bytes in s that matches one of the bytes in accept
 * or NULL if the character is not found
 */

char *_strpbrk(char *s, char *accept)
{
int l;
while (*s != '\0')
{
for (l = 0; accept[l] != '\0'; l++)
{
if (*s == accept[l])
{
return (s);
}
}
s++;
}
return (NULL);
}
