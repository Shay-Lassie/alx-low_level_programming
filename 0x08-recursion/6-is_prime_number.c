#include "main.h"

/**
 * prime - Makes possible to evaluate from 1 to n
 * @a: same number as n
 * @b: number that iterates from 1 to n
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int prime(int a, int b)
{
	if (a == b)
		return (1);
	else if (a % b == 0)
		return (0);
	return (prime(a, b + 1));
}

/**
 * is_prime_number - return 1 if int is a prime number
 * Description: return o if other wise
 * @n: prime number to check
 * Return: 1 if prime, 0 if not
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (prime(n, 2));
	}
}
