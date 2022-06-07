#include "main.h"
  
/**
 * print_alphabet_x10 - print alphabet using your _putchar function
 *
 * Return: 0 for success
 */

void print_alphabet_x10(void)
{
        char c;
	int i;
	
	for (i = 1; i = 10; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
        	{
                	_putchar(c);
        	}
	}
        _putchar('\n');
}
