#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: formats of the parameters
 */

void print_all(const char * const format, ...)
{
int l;
char *separator = "", *string;
va_list parameters;
va_start(parameters, format);
if (format)
{
while (format[l] != '\0')
{
switch (format[l])
{
case 'c':
printf("%s%c", separator, va_arg(parameters, int));
break;
case 'i':
printf("%s%d", separator, va_arg(parameters, int));
break;
case 'f':
printf("%s%f", separator, va_arg(parameters, double));
break;
case 's':
string = va_arg(parameters, char *);
if (!string)
{
string = "(nil)";
}
printf("%s%s", separator, string);
break;
default:
l++;
continue;
}
separator = ", ";
l++;
}
}
printf("\n");
va_end(parameters);
}
