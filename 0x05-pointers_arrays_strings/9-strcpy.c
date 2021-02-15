#include "holberton.h"

/**
 * *_strcpy - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

        for (; src[i] != '\0'; i++)
        {
                dest[i] = src[i];
        }
        return (dest);
}
