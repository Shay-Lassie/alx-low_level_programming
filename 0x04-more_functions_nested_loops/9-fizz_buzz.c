#include <stdio.h>

/**
 * main - print 1 ti 100 the fizz buzz
 * Description: x3 - Fizz x5 - Buzz both - FizzBuzz
 * Return: print nimbers
 */

int main(void)
{
	int x;

	for (x = 1; x <= 100; x++)
	{
		if (x % 15 == 0)
			printf("FizzBuzz ");
		else if (x % 3 == 0)
			printf("Fizz ");
		else if (x % 5 == 0)
			printf("Buzz ");
		else
			printf("%x ", x);
	}
	printf("\n");

	return (0);
}