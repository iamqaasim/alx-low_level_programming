#include "main.h"

/**
 * _abs() - computes absolute value
 *
 * Return: 0 for success
 */

int _abs(int a)
{
	if (a < 0)
	{
		a = a * -1;
		
		_putchar(a);
	}
	else
	{
		_putchar(a);
	}
	return (0);
}
