#include "variadic_functions.h"

/**
 * print_numbers - print numbers, followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of parameters
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int l;
va_list numbers;
va_start(numbers, n);
for (l = 0; l < n; l++)
{
printf("%d", (int)va_arg(numbers, int));
if (separator != NULL && l < n - 1)
{
printf("%s", separator);
}
}
printf("\n");
}
