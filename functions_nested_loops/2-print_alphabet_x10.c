#include "main.h"

void print_alphabet_x10(void)
{
int n = 0;
char l = 'a';
for (n = 0; n < 10; n++)
{
for (l = 'a'; l < 'z'; l++)
{
_putchar(l);
}
_putchar('\n');
}
}
