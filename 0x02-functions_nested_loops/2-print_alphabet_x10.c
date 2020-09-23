#include "holberton.h"

/**
 * print_alphabet - entry point
 *
 * Description: Prints the alphabet with _putchar 10 times
 *
 * Return: void
 */

void print_alphabet_x10(void) /*prints alphabet*/
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
