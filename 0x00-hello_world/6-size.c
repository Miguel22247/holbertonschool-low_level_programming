#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int a;
long int b;
long long int c;
char d;
float f;

printf("Size of char: %zu byte(s)\n", sizeof(d));
printf("Size of int: %zu byte(s)\n", sizeof(a));
printf("Size of long int: %zu byte(s)\n", sizeof(b));
printf("Size of long long int: %zu byte(s)\n", sizeof(c));
printf("Size of float: %zu byte(s)\n", sizeof(f));
return (0);
}
