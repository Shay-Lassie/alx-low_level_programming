#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* This program will assign a random number to n each time it is executed */

/** Main: Complete the source code
 *
 * Description: Print positve negative or zero
 *
 * Return: 0
 *
 * */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* The Code */
	if (n < 0){
		printf("%d is negative", n);
	}
	else if (n == 0){
		printf("%d is zero", n);
	}
	else if (n > 0){
		printf("%d is positive", n);
	}
	else{
		printf("Is not a number");
	}
	return (0);
}
