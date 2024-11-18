#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - execute a function on each element of an array
 * @array: array to iterate
 * @size: size of the array
 * @action: pointer to the function to execute
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned long int l;
for (l = 0; l < size; l++)
{
action(array[l]);
}
}
