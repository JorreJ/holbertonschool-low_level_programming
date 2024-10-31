#include "main.h"
#include "2-strlen.c"

/**
 * leet - encodes a string in 1337
 * @s: string to be encoded
 *
 * Return: the resulting string;
 */

char *leet(char *s)
{
int l, t;
char english[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
char leet[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
for (l = 0; l < _strlen(s); l++)
{
for (t = 0; t < 10; t++)
{
if (s[l] == english[t])
{
s[l] = leet[t];
}
}
}
return (s);
}
