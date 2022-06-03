#include <stdio.h>

/**
 * main - print numbers 0-9 without using char or printf/puts..etc
 *
 * Return: 0 for success
 */

int main(void)
{
	int i = '0';

	while (i <= '9')
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
