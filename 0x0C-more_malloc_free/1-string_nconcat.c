#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
/**
 * string_nconcat - concatenates 2 strings into a new string,
 * taking the first n from string 2. If n>strlen(s2),
 * use whole string s2.
 *
 * @s1: first string
 * @s2: second string
 * @n: number of characters to take from second string
 *
 * Return: new string, or null on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2, i;
	char *ptr, *ret;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";

	for (len1 = 0, ptr = s1; *ptr; ptr++)
		len1++;
	for (len2 = 0, ptr = s2; *ptr; ptr++)
		len2++;
	if (n > len2)
		n = len2;

	ret = malloc((len1 + n + 1) * sizeof(char));
	if (!ret)
		return (0);

	ptr = ret;
	while (*s1)
		*ptr++ = *s1++;
	i = 0;
	while (i < n)
	{
		*ptr++ = s2[i++];
	}
	*ptr = 0;

	return (ret);
}
