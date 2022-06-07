#include "main.h"
/**
 * main - prints _putchar
 *
 * Return: 0 for success
 */

int main(void)
{
	char c = "_putchar";
	int i;

	for(i = 0; i < 9; i++)
	{
		printf(c[i]);
	}
	printf("\n");
	return (0);
}
