#include "holberton.h"

/**
 * print_most_numbers - prints numbers from 0-9 except 2 and 4
 * Description: use _putchar
 *Return: 0-1, 3, 5-9
 */

void print_most_numbers(void)
{
	int num;

	for (num =0; num < 10; num++)
	{
		if (num != 2 && num != 4)
			_putchar(num + '0');
	}
	_putchar('\n');
}
