#include "holberton.h"

/**
 * _memset - fills the first n bytes of the memory area
 * @b: constant bytes
 * @s: pointed destination
 * @n: bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
