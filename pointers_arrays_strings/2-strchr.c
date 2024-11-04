#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates a character in a string
 * @s: string to search
 * @c: char to find
 *
 * Return: pointer to the first occurence of the character c,
 * or NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
while (*s++)
{
if (*s == c)
{
return (s);
}
if (!*s)
{
return (0);
}
}
return (s);
}
