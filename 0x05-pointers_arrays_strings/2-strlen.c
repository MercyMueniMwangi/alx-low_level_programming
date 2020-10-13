#include "holberton.h"

/**
 * _strlen - returns the length of a string
 *
 *@s - string
 *Description: FYI: The standard library provides a similar function: strlen.
 *Return: 0 always
 */

int _strlen(char *s)
{

	int length;

	for (length = 0; s[length] != '\0'; length++);
	return (length);
}
