#include "3-calc.h"
#include <stddef.h>

/**
 * op_add - calculates the sum of two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: sum of a and b
 */

int op_add(int a, int b)
{
return (a + b);
}

/**
 * op_sub - calculate difference of two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: difference of a and b
 */

int op_sub(int a, int b)
{
return (a - b);
}

/**
 * op_mul - calculate the product of two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: product of a and b
 */

int op_mul(int a, int b)
{
return (a * b);
}

/**
 * op_div - calculate the division of two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: result of th edivision of a by b
 */

int op_div(int a, int b)
{
return (a / b);
}

/**
 * op_mod - calculate the remainder of the division of two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: remainder of the division of a by b
 */

int op_mod(int a, int b)
{
return (a % b);
}
