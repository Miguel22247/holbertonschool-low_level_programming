#include "holberton.h"




void print_square(int size)
{

	int co,ro;
	if (size <= 0)
{
	_putchar('\n');
}
	else
	{
		for (co = 1; co <= size; co++)
		{
			_putchar('#');
			for (ro = 2; ro <= size; ro++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
