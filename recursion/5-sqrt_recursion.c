#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to return th natural square root
 *
 * Return: the resulting square root
 */

int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
return (_natural_sqrt(n, 0));
}

/**
 * _natural_sqrt - function to find the natural square root of a number
 * @n: number to calculate the square root of
 * @s: square root
 *
 * Return: the resulting square root
 */

int _natural_sqrt(int n, int s)
{
if (s * s == n)
{
return (s);
}
else if (s * s > n)
{
return (-1);
}
return (_natural_sqrt(n, s + 1));
}
