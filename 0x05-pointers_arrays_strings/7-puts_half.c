#include "main.h"

/**
 * puts_half - print half the string 
 * @str: string
 *
 * Return: nothing
 */

void puts_half(char *str)
{
	int i;
	int count;

	for (count = 0; *(str + count) != ('\0'); count++)
	{
	}

	int n = int ((count - 1) / 2);

	if (count % 2 = 0)
	{
		for (i = count/2; str[i] != '\0'; i++)
		{
			_putchar(*(str + i));
		}
	}
	else 
	{
		for (i = n; str[i] != '\0'; i++)
                {
                        _putchar(*(str + i));
                }
	}
}
