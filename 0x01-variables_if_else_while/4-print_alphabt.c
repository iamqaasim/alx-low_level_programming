#include <stdio.h>

/**
 * main - print alphabet except q and e
 *
 * Return: 0 for success
 */

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'q' && ch != 'e')
		{
			putchar(ch);
		}
		ch++;
	}
	putchar ('\n');
	return (0);
}
