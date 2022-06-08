#include "main.h"

/**
 * print_sign - print sign
 * 
 * @n - arguement for _islower
 *
 * Return: 1 if lower case 0 otherwise
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (1);
	}
	_putchar('0')
	return (0);
}
