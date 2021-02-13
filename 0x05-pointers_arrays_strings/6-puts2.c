#include "holberton.h"

/**
 * puts2 - function should print only one character out of two
 * starting with the first one
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
<<<<<<< HEAD
	int n = 0;

	for (; str[n] != '\0'; n++)
=======
	int i = 0;

	for (; str[i] != '\0'; i++)
>>>>>>> b60882d41f606691ab0f5b05ed37928c77a1f33f
	{
		if ((i % 2) == 0)
			_putchar(str[i]);
		else
			continue;
	}
	_putchar('\n');
}
