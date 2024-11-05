#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to return th natural square root
 *
 * Return: the resulting square root
 */

int _sqrt_recursion(int n)
{
  return (_sqrt_recursion(n / 2));
}
