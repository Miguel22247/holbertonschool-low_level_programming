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
  char low;

  for (c = '0'; c <='9'; c++)
    putchar(c);
  for (low = 'a'; low <= 'f'; low++)
    putchar(low);
  putchar('\n');

  return(0);
 }
