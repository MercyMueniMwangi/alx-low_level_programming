#include "holberton.h"

/**
 * main - check for alphabet character
 *
 * Return:Returns 1 if c is a letter, lowercase or uppercase
Returns 0 otherwise
 */

int _isalpha(int c)
{
	if((c > 64 && c < 91) || (c > 96 && c < 123))
		return(1);
	else
		return(0);
}
