#include "main.h"

/**
 * _strlen_recursion - return the lenght of a string.
 * @s: string to claculate the lenght of
 * 
 * Return: lenght of the string
 */

int _strlen_recursion(char *s)
{
if (*s != '\0')
{
return (1 + _strlen_recursion(s + 1));
}
else
{
return (0);
}
}
