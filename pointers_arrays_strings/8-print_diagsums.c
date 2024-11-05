#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print the sum of two diagonals
 * of a square matrix of integers
 * @a: square matrix of wich we print the sum of diagonals
 * @size: size of the matrix
 */

void print_diagsums(int *a, int size)
{
int l;
int s1, s2;
s1 = 0;
s2 = 0;
for (l = 0; l < size; l++)
{
s1 += a[(size * l) + l];
s2 += a[(size * (l + 1)) - (l + 1)];
}
printf("%d, %d\n", s1, s2);
}
