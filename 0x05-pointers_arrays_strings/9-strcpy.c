#include "holberton.h"

/**
 * char *_strcpy - a function that copies the string pointed to by src
 * @dest: copy to
 * @src: copy from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	char *saved = dest;
	while (*src)
	{
		dest[i] = src[i];
	}
	*dest = 0;
	return(saved);
}
