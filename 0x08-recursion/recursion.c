#include <stdio.h>

/**
 * basic of what is recursion
 * factorial x! = x * (x-1)!
 *
 */

int factorial(int n)
{
	if (n == 1)
	{
		return(1);
	}
	return (n * factorial(n - 1));
}

char *s = "hello";
char s[] = "hello";

void string(char *s)
{
	
}
