#include <stdio.h>

/*
 * main print all possible combinations of single digit numbers 
 *
 * return 0 for success
 */

int main (void)
{
	int i = '0';

	while (i <= '9')
	{
		putchar (i);
		if (i != '9')
		{
			putchar(',');
			putchar(' ');
		}
		++i;
	}
	putchar ('\n');
	return (0);
}
