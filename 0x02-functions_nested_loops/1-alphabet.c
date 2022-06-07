#include "main.h"

/**
 * main - print alphabet using your _putchar function
 *
 * Return: 0 for success
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c < 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n')
	return (0);
}
