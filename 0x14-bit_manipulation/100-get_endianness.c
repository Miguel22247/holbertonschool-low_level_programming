#include "holberton.h"
/**
 * get_endianness - return the endianness of the machine
 *
 * Return: 0 for big endian, 1 for little endian
 */
int get_endianness(void)
{
	int n = 1;

	return (*((char *) &n) + '0');
}