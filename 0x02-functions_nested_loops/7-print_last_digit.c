#include "holberton.h"

/**
 *main - prints last digit of a number
 *
 *Return: the value of the last digit
 */

int print_last_digit(int n)
{
	int last_number;
	
	if(n<0)
	{
		last_number = -1 * (n % 10);
		_putchar(last_number + '0');
		return(last_number);
	}
	else
	{
		last_number = n % 10;
		_putchar(last_number + '0');
		return(last_number);
	}
}
