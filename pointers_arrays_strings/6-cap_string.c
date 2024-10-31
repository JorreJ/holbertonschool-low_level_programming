#include "main.h"
#include "2-strlen.c"

/**
 * cap_string - capitalizes everey word of a string
 * @s: string to modify
 *
 * Return: the resulting string
 */

char *cap_string(char *s)
{
int l, t;
char sw[13] = {' ', '\t', '\n', ',', ';', '.', '!',
'?', '"', '(', ')', '{', '}'};
for (l = 0; l < _strlen(s); l++)
{
if (l == 0 && s[l] >= 'a' && s[l] <= 'z')
{
s[l] = s[l] - 32;
}
for (t = 0; t < 13; t++)
{
if (s[l] == sw[t])
{
if (s[l + 1] >= 'a' && s[l + 1] <= 'z')
{
s[l + 1] = s[l + 1] - 32;
}
}
}
}
return (s);
}
