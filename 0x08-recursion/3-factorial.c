#include "main.h"

/**
 * factorial - return the factorial of a number
 * Description: calculate math factorial by calling fact till 1
 * @n: number to return factorial of
 * Return: Always 0
 */

int factorial(int n)
{
	if (n == 1)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
		return (n * factorial(n - 1));
}
