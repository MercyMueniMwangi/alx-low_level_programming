#include "holberton.h"

/**
 * print_alphabet - entry point
 *Description: Prints the alphabet with _putchar
 * Return: void
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
