#include "holberton.h"
#include <stdio.h>
/**
 * rot13 - qwqerwqerwqerwqer
 * @s: werwqreqwerwqerw
 * Return:sadfsadf
 */
char *rot13(char *s)
{
	int i = 0, i2 = 0;
	char my[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char my2[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(s + i) != 0)
	{
		for (i2 = 0; i2 <= 52; i2++)
		{
			if (*(s + i) == my[i2])
			{
				*(s + i) = my2[i2];
				break;
			}
		}
				i++;
	}
		return (s);
}
