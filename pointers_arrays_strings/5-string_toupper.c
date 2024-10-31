#include "main.h"
#include "2-strlen.c"

/**
 * string_toupper - changes all lowercase letters of a string
 * to uppercase
 * @s: string to modify
 *
 * Return: the resulting string
 */

char *string_toupper(char *s)
{
int l;
for (l = 0; l < _strlen(s); l++)
{
if (s[l] <= 'z' && s[l] >= 'a')
{
s[l] = s[l] - 32;
}
}
return (s);
}
