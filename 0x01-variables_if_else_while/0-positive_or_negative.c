#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - something
*
* betty style doc for function main goes there
*
* Program assign a random number to the variable n each time it is executed
*
* Var n will store a different value every time you will run this program
*
* Return: 0 
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}
	return (0);
}
