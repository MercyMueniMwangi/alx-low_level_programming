#include "holberton.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14, followed by newline
 * Description: You can only use _putchar
 * Return: 0-14 ten times
 */

void more_numbers(void)
{
	int numbers, count = 0;

	while (count < 10)
	{
		numbers = 0;
		while (numbers < 15)
		{
			_putchar(numbers + '0');
			numbers++;
		}
		_putchar('\n');
		count++;
	}
}
