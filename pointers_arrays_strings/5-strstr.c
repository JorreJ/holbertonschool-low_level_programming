#include "main.h"
#include "2-strlen.c"
#include <stddef.h>
#include <stdio.h>

/**
 * _strstr - locates a substring
 * @haystack: string to search in
 * @needle: substring to look for
 *
 * Return: pointer to the beginning of the located substring,
 * or NULL if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
int hl, nl;
for (hl = 0; haystack[hl] != '\0'; hl++)
{
for (nl = 0; needle[nl] != '\0'; nl++)
{
if (haystack[hl + nl] != needle[nl])
{
break;
}
}
if (needle[nl] == '\0')
{
return (&haystack[hl]);
}
}
return (NULL);
}
