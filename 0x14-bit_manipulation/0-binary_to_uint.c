#include "holberton.h"

/**
 * binary_to_uint - converts binary to an int decimal
 *where b is pointing to a string of 0 and 1 chars
 *
 *@b: binary
 *
 * Return: decimal
 */


#include "holberton.h"
/**
 * binary_to_uint - converts a binary number string to unsigned int
 * @b: binary number as string
 *
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;

	if (!b)
		return (0);
	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		num = num * 2 + (*b++ - '0');
	}
	return (num);
}
