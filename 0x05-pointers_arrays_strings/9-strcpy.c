#include "holberton.h"

/**
 * *_strcpy - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
char *_strcpy(char *dest, char *src)
{
	char *saved = dest;
	
	while (*src)
	{
		*dest++ = *src++;
	}
	*dest = 0;
	return saved;
}
