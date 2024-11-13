#include "main.h"
#include <stdlib.h>
#include "../pointers_arrays_strings/2-strlen.c"

/**
 * string_nconcat - concatenate two strings
 * @s1: fisrt string to concatenate
 * @s2: second string to concatenate
 * @n: nuber of bytes of s2 to concatenate
 *
 * Return: pointer to the new string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *s3;
int l1, l2;
if (s1 != NULL && s2 != NULL)
{
s3 = malloc(sizeof(char) * _strlen(s1) + n + 1);
}
else if (s1 != NULL && s2 == NULL)
{
s3 = malloc(sizeof(char) * _strlen(s1) + 1);
}
else if (s1 == NULL && s2 != NULL)
{
s3 = malloc(n + 1);
}
else
{
s3 = malloc(1);
}
if (s3 == NULL)
{
return (NULL);
}
for (l1 = 0; l1 < _strlen(s1) && s1 != NULL; l1++)
{
*(s3 + l1) = *(s1 + l1);
}
for (l2 = 0; (unsigned int)l2 < n && s2 != NULL; l2++)
{
*(s3 + l1 + l2) = *(s2 + l2);
}
*(s3 + l1 + l2 + 1) = '\0';
return (s3);
}
