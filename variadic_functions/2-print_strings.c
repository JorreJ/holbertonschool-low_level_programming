#include "variadic_functions.h"

/**
 * print_strings - prints strings separated by a separator
 * @separator: string to separate the strings passed
 * @n: number of strings passed
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int l;
char *argstring;
va_list strings;
va_start(strings, n);
for (l = 0; l < n; l++)
{
argstring = (char *)va_arg(strings, char *);
if (argstring == NULL)
{
printf("nil");
}
else
{
printf("%s", argstring);
}
if (l < n - 1 && separator != NULL)
{
printf("%s", separator);
}
}
printf("\n");
}
