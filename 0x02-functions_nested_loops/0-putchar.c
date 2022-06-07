#include "main.h"
/**
 * main - prints _putchar
 *
 * Return: 0
 */

int main(void)
{
	char ch = "_putchar";
	int i;

	for(i =0; i < 9; i++)
	{
		_putchar(ch[i]);
	}
	printf("\n");
	return (0);
}
