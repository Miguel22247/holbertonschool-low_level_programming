#include "holberton.h"

/**
 * print_numbers - a function that prints the numbers, from 0 to 9
 *
 * Return: 0-9 followed by newline
 */
void print_numbers(void)
{
	int n;
	for (n = 0; n <=9; n++)
		_putchar(n + '0');
	_putchar('\n');
}
