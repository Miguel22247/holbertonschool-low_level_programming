#include "holberton.h"

/**
 * more_numbers - a function that prints 10 times the numbers, from 0 to 14
 * _putchar only 3 times
 * Return: 0-14 x10 followed by new line
 */
void more_numbers(void);

int n, ro;

for(ro = 0; ro <= 10; ro++)
{
	for(n = 0; n = 14; n++)
	{
		if (n >= 10)
		{
			_putchar((n / 10) + '0');
		}
		_putchar((i % 10) + '0');
	}
	_putchar('\n');
}
}
