#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */

void rev_string(char *s)
{
int n = 0;
int l;
char temp;
while (s[n] != '\0')
{
n++;
}
for (l = 0; l < n / 2; l++)
{
temp = s[l];
s[l] = s[n - 1 - l];
s[n - 1 - l] = temp;
}
}
