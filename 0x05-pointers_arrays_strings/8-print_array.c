#include "main.h"
#include <stdio.h>
/**
 * print_array - prints elements of an array
 * @a: array
 * @n: amount of elements we want to print
 * Return: 0 for success
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d",a[i]);
		if (i < n)
		{
			printf(", ");
		}
	}
	_putchar('\n');
}
