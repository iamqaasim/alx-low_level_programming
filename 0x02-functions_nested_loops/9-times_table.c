#include "main.h"

/**
 * times_table - print 9 times table
 *
 * Return: 0 for sucess
 */

void times_table(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		int j;

		for (j = '0'; j <= '9'; j++)
		{
			int value = i * j;
			
			_putchar(value);
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
