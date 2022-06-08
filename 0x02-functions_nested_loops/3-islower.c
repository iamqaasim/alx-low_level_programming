#include "main.h"

/**
 * islower - checks for lower case
 *
 * Return 1 if lower case 0 otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
