#include "main.h"

/**
 * print_sign - checks for sign of a number
 * @n: the nuber to check
 * Return: 1 and print + if n is positive,
 * Return: 0 and prints 0 if n is zero,
 * Return: -1 and prints - if n is negative
 */

int print_sign(int n)
{
if (n > '0')
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
