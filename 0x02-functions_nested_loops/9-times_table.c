#include "main.h"

/**
 * times_table - print 9 times table
 *
 * Return: 0 for sucess
 */

void times_table(void)
{
	int value = '9';
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		int j;

		for (j = '0'; j <= '9'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
