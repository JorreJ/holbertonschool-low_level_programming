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
int l1, l2, len1 = 0, len2 = 0;
if (s1 != NULL)
{
len1 = _strlen(s1);
}
if (s2 != NULL)
{
len2 = _strlen(s2);
}
if (n < (unsigned int)len2)
{
s3 = malloc(sizeof(char) * len1 + n + 1);
}
else
{
s3 = malloc(sizeof(char) * len1 + len2 + 1);
}
if (s3 == NULL)
{
return (NULL);
}
for (l1 = 0; l1 < len1; l1++)
{
*(s3 + l1) = *(s1 + l1);
}
for (l2 = 0; (unsigned int)l2 < n && l2 < len2; l2++)
{
*(s3 + l1 + l2) = *(s2 + l2);
}
*(s3 + l1 + l2 + 1) = '\0';
return (s3);
}
