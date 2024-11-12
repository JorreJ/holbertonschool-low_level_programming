#include "main.h"
#include <stdlib.h>
#include "../pointers_arrays_strings/2-strlen.c"

/**
 * _strdup - return a pointer to a copy of string str
 * @str: string to copy
 *
 * Return: pointer to copy of str
 */

char *_strdup(char *str)
{
char *sc;
int l;
if (str == NULL)
{
return (NULL);
}
sc = malloc((_strlen(str) + 1) * sizeof(char));
if (sc == NULL)
{
return (NULL);
}
for (l = 0; l < _strlen(str); l++)
{
*(sc + l) = *(str + l);
}
*(sc + l) = '\0';
return (sc);
}
