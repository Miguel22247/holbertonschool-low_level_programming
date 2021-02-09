#include <stdio.h>
#include "holberton.h"
/**
 * print_to_98 - a function that prints all natural numbers from n to 98
 * user input's number prints to 98, regardless < 98 or > 98
 * @n: number input
 * Return: Always 0 (Success)
 */
void print_to_98(int n)
{
  if (n < 98)
    {
      while (n <= 98)
	{
	  printf("%d", n);
	  if (n != 98)
	    {
	      printf(", ");
	    }
	  n++;
	}
    }
  else if (n > 98)
    {
      while (n >= 98)
	{
	  printf("%d", n);
	  if (n != 98)
	    {
	      printf(", ");
	    }
	  n--;
	}
    }
  else
    {
      printf("98");
    }
  printf("\n");
}
