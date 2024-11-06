#include "main.h"

/**
 * is_prime_number - verify prime numbers
 * @n: number to verify
 *
 * Return: 1 is n is a prime number, otherwise return 0
 */

int is_prime_number(int n)
{
if (n > 1)
{
return (_factors(n, 2));
}
return (0);
}

/**
 * _factors - calculate factors of a number
 * @n: numbers of wich calculate factors
 * @f: potential factors
 *
 * Return: 1 if n is prime, 0 if not
 */

int _factors(int n, int f)
{
if (f == n)
{
return (1);
}
if (n % f == 0 && f != 1)
{
return (0);
}
return (_factors(n, f + 1));
}
