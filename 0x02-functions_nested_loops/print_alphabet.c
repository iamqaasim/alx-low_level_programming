#include <unistd.h>
  
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
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
