#include "holberton.h"

/**
 * binary_to_uint - converts binary to an int decimal
 *where b is pointing to a string of 0 and 1 chars
 *
 *@b: binary
 *
 * Return: decimal
 */

int power(int base, int pow)
{
	int result = 1;

	for (pow; pow > 0;pow--)
	{
		result = result*base;
	}
	return result;
}

int len(const char *s)
{
	int len = 0;
	for(le
