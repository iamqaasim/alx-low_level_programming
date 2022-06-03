#include <stdio.h>

/**
 * main - print alphabet in reverse
 *
 * Retrun: 0 for success
 */

int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');
	return (0);
}
