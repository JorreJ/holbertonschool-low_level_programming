#ifndef STRLEN_C
#define STRLEN_C
#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 *
 * Return: the length of the string
 */

int _strlen(char *s)
{
int n = 0;
while (*s != '\0')
{
s++;
n++;
}
return (n);
}
#endif