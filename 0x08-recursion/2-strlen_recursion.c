#include "holberton.h"

/**
 * _strlen_recursion - note: no _putchar in local test
 * @s: input
 * Return: Always 0 (Success)
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
