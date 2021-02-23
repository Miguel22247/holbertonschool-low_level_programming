#include "holberton.h"
#include <stdio.h>

/**
 * _strstr - Entry point
 * @haystack: input
 * @needle: input
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *uno = haystack;
		char *dos = needle;

		while (*uno == *dos && *two != '\0')
		{
			uno++;
			dos++;
		}

		if (*dos == '\0')
			return (haystack);
	}

	return (NULL);
}
