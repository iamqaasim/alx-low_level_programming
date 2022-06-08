#include "main.h"
  
/**
 * print_last_digit() - computes absolute value
 *
 * Return: @d%10 for success
 */

int print_last_digit(int d)
{	      
	int value = d%10;

	_putchar(value);
	return (d%10);
}
