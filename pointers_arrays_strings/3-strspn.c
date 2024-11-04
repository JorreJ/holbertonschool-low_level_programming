#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string to evaluate
 * @accept: string containing the list of characters to match in s
 *
 * Return: number of bytes in the initial segment of s
 **/

unsigned int _strspn(char *s, char *accept)
{
int sl, al, v;
int c = 0;
for (sl = 0; s[sl] != '\0'; sl++)
{
v = 0;
for (al = 0; accept[al] != '\0'; al++)
{
if (s[sl] == accept[al])
{
c++;
v = 1;
}
}
if (v == 0)
{
return (c);
}
}
return (0);
}
