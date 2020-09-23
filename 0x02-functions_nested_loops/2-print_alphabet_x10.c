#include "holberton.h"
/**
 *main - pritnts alphabets 10 times
 *
 *Return:0 
 */

void print_alphabet_x10(void)
{
	char c;
	int a =0;
	while(a < 10)
	{
		c = 'a';
		while(c<= 'z')
		{
		_putchar(c);
		c++;
		}
	_putchar('\n');
	a++;
	}
}
