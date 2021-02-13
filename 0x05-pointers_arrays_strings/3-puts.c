#include "holberton.h"

/**
 * _puts - a function that prints a string
 * @str: string input
 * Return: string
 */
void _puts(char *str)
{
	int n;

	for (n = 0; str[n] != '\0'; n++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
