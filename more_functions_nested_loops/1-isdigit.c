#include "main.h"

/**
 * _isdigit - checks for digit
 * @c: the character to check
 * Return: Always
 */

int _isdigit(int c)
{
if (c >= '0' && c <= '9')
{
return (1);
}
else
{
return (0);
}
}
