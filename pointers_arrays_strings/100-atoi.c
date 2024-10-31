#include "main.h"
#include "2-strlen.c"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */

int _atoi(char *s)
{
int l;
int r = 0;
int n = 0;
int ns = 0;
for (l = 0; l < _strlen(s); l++)
{
if (s[l] == '-')
{
ns++;
if (ns % 2 == 0)
{
n = 0;
}
}
if (s[l] >= 48 && s[l] <= 57)
{
while (s[l] >= 48 && s[l] <= 57)
{
n = ((n * 10) + s[l] - 48);
l++;
}
break;
}
}
if (ns % 2 != 0)
{
r = n;
n = n - r;
n = n - r;
}
return (n);
}
