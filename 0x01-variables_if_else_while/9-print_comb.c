#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
  int c;

  for (c = '0'; c <= '9'; c++)
    {
      putchar(c);
      if (c != '9')
	{
	  putchar(',');
	  putchar(' ');
	}
    }
  putchar('\n');
  return(0);
 }
