#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100, followed by a new line
 * but for multiples of three prints Fizz instead of the number
 * and for the multiples of five prints Buzz
 * Return: Always 0 (Success)
 */

int main(void)
{
int n;
for (n = 1; n <= 100; n++)
{
if ((n % 3) == 0)
{
printf("Fizz");
}
if ((n % 5) == 0)
{
printf("Buzz");
}
if ((n % 3) != 0 && (n % 5) != 0)
{
printf("%d", n);
}
if (n < 100)
{
printf(" ");
}
}
printf("\n");
return (0);
}
