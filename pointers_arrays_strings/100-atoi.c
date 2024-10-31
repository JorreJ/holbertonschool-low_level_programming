#include "main.h"
#include "2-strlen.c"
#include <stdio.h>

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */

int _atoi(char *s)
{
  int l;
  int n = 0;
  int ns = 0;
  for (l = 0; l < _strlen(s); l++)
    {
      if (s[l] == '-')
	{
	  ns++;
	  if (ns % 2 == 0)
	    {
	      ns = 0;
	    }
	}
      if (s[l] >= '0' && s[l] <= '9')
	{
	  while (s[l] >= '0' && s[l] <= '9')
	    {
	      n = ((n * 10) + (s[l] - '0'));
	      l++;
	    }
	}
    }
  if (ns % 2 != 0)
    {
      n = -n;
    }
  return (n);
}
