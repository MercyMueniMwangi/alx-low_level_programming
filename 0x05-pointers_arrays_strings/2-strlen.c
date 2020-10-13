#include "holberton.h"

/**
 * _strlen - returns the length of a string
 *@s: string
 *
 *Return: 0 always
 */

int _strlen(char *s)
{

	int length;

	for (length = 0; s[length] != '\0'; length++)
		return (length);
}
