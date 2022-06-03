#include <stdio.h>

/**
 * main - print numbers of base 16
 *
 * Return: 0 for success
 */

int main(void)
{
	int i = '0';

	while (i <= '9')
	{
		putchar (i);
		i++;
	}
	while (i <= 'f')
	{
		putchar (i);
		i++;
	}
	putchar ('\n');
	return (0);
}
