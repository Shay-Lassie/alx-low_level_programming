#include "main.h"
#include <stdio.h>

/**
 * check - check the code 
 * Description: check my code
 * Return: Always 0.
 */

int main(void)
{
	int n;

	n = 402; /* integer in question */
	printf("n=%d\n", n);
	reset_to_98(&n); /* use address on n as pointer or parameter input */
	printf("n=%d\n", n);
	
	return (0);
}
