#include "main.h"

/**
 * reverse_array - reverses an array of integers
 * @a: array to be reversed
 * @n: number of elements in the array
 */

void reverse_array(int *a, int n)
{
int left, right, temp;
left = 0;
right = n - 1;
while (left < right)
{
temp = a[left];
a[left] = a[right];
a[right] = temp;
left++;
right--;
}
}
