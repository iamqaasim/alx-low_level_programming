#include "main.h"

/**
 * print_array - prints a string
 * @a: string
 * @n: amount of eleents we want to print
 * Return: 0 for success
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i == n-1; i++)
	{
		_putchar(a[i]);
	}
	_putchar('\n');
}
