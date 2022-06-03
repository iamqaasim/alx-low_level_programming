#include <stdio.h>

/**
 * main - prints lower case alphabet
 *
 * Return: 0 for success
 */

int main (void)
{
	char ch = 'a';

	while(ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
