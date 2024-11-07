#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - adds two positive number
 * @argc: number of arguments
 * @argv: array of arguents
 *
 * Return: 0 (Success), or 1 (Success)
 */

int main(int argc, char *argv[])
{
int a = 0, l1, l2;
for (l1 = 1; l1 < argc; l1++)
{
for (l2 = 0; argv[l1][l2] != '\0'; l2++)
{
if (argv[l1][l2] < '0' || argv[l1][l2] > '9')
{
printf("Error\n");
return (1);
}
}
a += atoi(argv[l1]);
}
printf("%d\n", a);
return (0);
}
