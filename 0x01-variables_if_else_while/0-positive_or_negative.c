#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/** main - Complete the source code
 *
 * Description: Print positve negative or zero
 *
 * Return: 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0) 
	{	
		printf("%d is negative\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else
	{
		printf("Is not a number\n");
	}
	return (0);
}
