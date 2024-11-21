#include "variadic_functions.h"

/**
 * sum_them_all - calculate the sumof all its parameters
 * @n: number of parameter
 *
 * Return: sum of its parameters
 */

int sum_them_all(const unsigned int n, ...)
{
int sum = 0;
unsigned int l;
va_list parameters;
va_start(parameters, n);
if (n == 0)
{
return (0);
}
for (l = 0; l < n; l++)
{
sum += (int)va_arg(parameters, int);
}
va_end(parameters);
return (sum);
}
