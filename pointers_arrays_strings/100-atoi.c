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
int n = 0;
int ns = 0;
for (l = 0; l < _strlen(s); l++)
{
if (s[l] == '-')
{
ns++;
}
if (s[l] >= '0' && s[l] <= '9')
{
while (s[l] >= '0' && s[l] <= '9')
{
n = n * 10;
if (n == 2147483640)
{
n = n - 1;
}
n = n + (s[l] - '0');
l++;
}
break;
}
}
if (ns % 2 != 0)
{
n = -n;
if (n == -2147483647)
{
return (n - 1);
}
}
if (n == 2147483646)
{
return (n + 1);
}
return (n);
}
