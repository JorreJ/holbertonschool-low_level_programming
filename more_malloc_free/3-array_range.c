#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum range of value stored
 * @max: maximum range of value stored
 *
 * Return: pointer to the created array
 */

int *array_range(int min, int max)
{
int *arr;
int l;
if (min > max)
{
return (NULL);
}
arr = (int *)malloc(sizeof(int) * (max - min) + 1);
if (arr == NULL)
{
return (NULL);
}
for (l = 0; min <= max; l++)
{
*(arr + l) = min++;
}
return (arr);
}
