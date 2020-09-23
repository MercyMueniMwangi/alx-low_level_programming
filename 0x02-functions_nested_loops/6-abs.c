#include "holberton.h"
/**
 *main - computes absolute number of an integer
 *
 *Return: Absolute number
 */

int _abs(int n)
{
	if(n<0)
	{
		return(n * -1);
	}
	else
	{
		return(n);
	}
}
