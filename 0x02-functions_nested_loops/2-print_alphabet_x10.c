#include "holberton.h"

/**
 *main - Entry point
 *
 *Description: prints 10 times the alphabet, in lowercase, followed by a new line.
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
