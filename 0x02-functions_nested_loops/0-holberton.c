#include "holberton.h"

/**
 *main - Prints Holberton
 *
 *Return: Always 0
 */

int main(void)
{
	char c[10] = "Holberton";
	int i = 0;
	for(i=0; i<=9; i++)
	{
		_putchar(c[i]);
	}
	_putchar('\n');
	return (0);
}
