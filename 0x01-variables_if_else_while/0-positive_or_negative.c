#include <stdlib.h>

#include <time.h>

/* 
* more headers goes there
*
*  betty style doc for function main goes there 
*
*  This program will assign a random number to the variable n each time it is executed
*
*  The variable n will store a different value every time you will run this program 
*/

int main(void)

{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n<0)
	{
		printf("is negative\n");
	}
	else if (n>0)
	{
		printf("is positive\n");
	}
	else
	{
		print("is zero \n");
	}
	return (0);

}
