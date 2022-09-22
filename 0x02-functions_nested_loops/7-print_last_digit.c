#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * Description: takes an integer and prints the last number
 * @n: parameter to be checked
 * Return: l parameter
 */

int print_last_digit(int n)
{
	int l, p;

	l = n % 10;
	if (l <  0)
		l = -l;
	p = '0' + l;
	_putchar(p);

	return (l);
}
