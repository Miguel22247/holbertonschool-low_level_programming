#include "holberton.h"
int lengthc(char *s);
int palindrome(char str[], int st, int end);
/**
 * is_palindrome - Entry Point
 * @s: input
 * Return: 0
 */
int is_palindrome(char *s)
{
	int len;

	len = lengthc(s);

	if (len == 0)
		return (1);
	return (palindrome(s, 0, len - 1));
}

/**
 * lengthc - finds the length count
 * @s: input
 * Return: length size
 */
int lengthc(char *s)
{
	if (*s != '\0')
		return (1 + lengthc(s + 1));
	return (0);
}

/**
 * palindrome - checks if start and end of string matches
 * @str: string
 * @st: start of string 0
 * @end: end of string from is_palindrome, from lengthc
 * Return: if str is a palindrome
 */
int palindrome(char str[], int st, int end)
{
	if (st >= end)
		return (1);
	if (str[st] != str[end])
		return (0);
	if (st <= end || st < end + 1)
		return (palindrome(str, st + 1, end - 1));
	return (1);
}
