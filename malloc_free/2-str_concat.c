#include "main.h"
#include <stdlib.h>
#include "../pointers_arrays_strings/2-strlen.c"

/**
 * str_concat - concatenate two strings
 * @s1: first string to concatenate
 * @s2: second string to concatenate
 *
 * Return: pointer to the strings concatenated (Success), or NULL (Error)
 */

char *str_concat(char *s1, char *s2)
{
int l, len1, len2;
char *s;
if (s1 == NULL)
len1 = 0;
else
len1 = _strlen(s1);
if (s2 == NULL)
len2 = 0;
else
len2 = _strlen(s2);
s = malloc((len1 + len2) *sizeof(char) + 1);
if (s == NULL)
return (NULL);
if (s1 != NULL && s2 != NULL)
{
for (l = 0; l < _strlen(s1); l++)
{
*(s + l) = *(s1 + l);
}
for (l = 0; l < _strlen(s2); l++)
{
*(s + _strlen(s1) + l) = *(s2 + l);
}
}
else if (s1 != NULL)
{
for (l = 0; l < _strlen(s1); l++)
{
*(s + l) = *(s1 + l);
}
}
else if (s2 != NULL)
{
for (l = 0; l < _strlen(s2); l++)
{
*(s + l) = *(s2 + l);
}
}
*(s + len1 + len2) = '\0';
return (s);
}
