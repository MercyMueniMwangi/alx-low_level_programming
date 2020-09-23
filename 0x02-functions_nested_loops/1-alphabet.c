#include "holberton.h"

/**
 *main - prints an alphabets in lowercase followed by newline
 *
 *Return: Always 0
 */
void print_alphabet(void)
{
	char c;
	for(c='a'; c<='z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
