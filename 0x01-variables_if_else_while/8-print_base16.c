#include <stdio.h>

/**
 * main - print numbers of base 16
 *
 * Return: 0 for success
 */

int main(void)
{
	int i = '0';
	int j = 'a';

	while (i <= '9')
	{
		putchar (i);
		i++;
	}
	while (j <= 'f')
	{
		putchar (j);
		j++;
	}
	putchar('\n');
	return (0);
}
