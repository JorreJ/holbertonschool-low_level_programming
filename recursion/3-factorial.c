#include "main.h"

/**
 * factorial - return the factorial of a given number
 * @n: number to return factorial
 *
 * Return: factorial of n
 */

int factorial(int n)
{
if (n == 0)
{
return (1);
}
if (n < 0)
{
return (-1);
}
else
{
return (n * factorial(n - 1));
}
}
