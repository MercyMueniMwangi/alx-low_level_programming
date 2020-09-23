#include "holberton.h"

/**
 * print_alphabet - entry point
 * Description: Prints the alphabet with _putchar
 * Return: void
 */

/**
 * print_alphabet_x10 - Prints 10 times the alphabet, in lowercase.
 */

void print_alphabet_x10(void)
{
	char c;
	int a = 0;

	while (a < 10)
	{
		c = 'a';
		while (c <= 'z')
		{
		_putchar(c);
		c++;
		}
	_putchar('\n');
	a++;
	}
}
