#include "main.h"

/**
 * swap_int - swap numbers
 * @a: int argument
 * @b: int argument
 *
 * Return: 0 for success
 */

void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
