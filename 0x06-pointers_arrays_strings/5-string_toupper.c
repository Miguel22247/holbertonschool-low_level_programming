#include "holberton.h"

/**
 * string_toupper - a function that changes all lower of a string to upper
 * @n: input string
 * Return: capitialized string
 */
char *string_toupper(char *n)
{
	int i;

	for (i = 0; n[i] != '\0'; i++)
	{
		if (n[i] >= 'a' && n[i] <= 'z')
			n[i] = n[i] - 32;
	}
	return (n);
}
