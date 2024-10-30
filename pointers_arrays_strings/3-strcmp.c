#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string to compare
 * @s2: second string to compare
 *
 * Return: less than 0 if s1 is less than s2, 0 if they're equal,
 * more than 0 if s1 is greater than s2
 */

int _strcmp(char *s1, char *s2)
{
int c = 0;
while (s1[c] == s2[c])
{
if (s1[c] == '\0' || s2[c] == '\0')
{
break;
}
c++;
}
if (s1[c] == '\0' && s2[c] == '\0')
{
return (0);
}
else
{
return (s1[c] - s2[c]);
}
}
