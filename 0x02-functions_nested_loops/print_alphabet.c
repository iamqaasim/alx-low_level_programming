#include <unistd.h>
  
/**
 * print_alphabet - prints lower case alphabet
 *
 * Return: 0 for success
 */
int print_alphabet(void)
{
	char alphabet = 'abcdefghijklmnopqrstuvwxyz';
	int i;
	
	for (i = 0; i < 26; i++)
	{
		_putchar(alphabet[i]);
	}
	_putchar ('\n');
        return (0);
}
