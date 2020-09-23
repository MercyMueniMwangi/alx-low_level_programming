#include "holberton.h"

/**
 *print_alphabet_x10: prints 10 times the alphabet.
 *@c: char type letter
 *Return: alphabets * 10
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
