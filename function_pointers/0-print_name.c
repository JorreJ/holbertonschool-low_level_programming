#include "function_pointers.h"
#include <stdlib.h>
#include "../pointers_arrays_strings/2-strlen.c"

/**
 * print_name - prints a name
 * 
 */

void print_name(char *name, void (*f)(char *))
{
    if (name == NULL)
    {
        return;
    }
    (*f)(name);
}