#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the numbers from 1 to 100
 * 3 multiples print Fizz instead of the number
 * 5 multiples print Buzz instead of the number
 * 3 & 5 multiples print FizzBuzz instead of the number
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	char f[] = "Fizz";
	char b[] = "Buzz";
	char fb[] = "FizzBuzz";
	for (n = 1; n <= 100; n++)
	{
		if (n == 100)
			printf("%s", b);
		else if ((n % 3 == 0) && (n % 5 == 0))
			printf("%s ", fb);
		else if (n % 3 == 0)
			printf("%s ", f);
		else if (n % 5 == 0)
			printf("%s ", b);
		else
			printf("%d ", n);
	}
	printf("\n");
	return (0);
}
