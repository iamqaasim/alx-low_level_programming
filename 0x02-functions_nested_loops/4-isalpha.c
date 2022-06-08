#include "main.h"
  
/**
 * _isalpha - checks for lower case and upper case
 * @c - arguement for _islower
 *
 * Return: 1 if lower case 0 otherwise
 */

int _isalpha(int c)
{
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        {
                return (1);
        }
        return (0);
}
