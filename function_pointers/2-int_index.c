#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - searches for an integer
 * @array: array to search in
 * @size: number of element in array
 * @cmp: pointer to the function that compare values
 *
 * Return: index of the first element for wich cmp doesn't return 0,
 * or -1 if no element matches
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int l, s;
if (size <= 0)
{
return (-1);
}
for (l = 0; l < size; l++)
{
s = cmp(array[l]);
if (s != 0)
{
return (l);
}
}
return (-1);
}
