#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 *
 * Return: the length of the string
 */

int _strlen(char *s)
{
int l;
while (s[l] != '\0')
{
l++;
}
return (l);
}