#include "main.h"

/**
 * print_sign - print the sign of a number
 * Description: if + / - or 0
 * Return: 1 if + 0 if 0 -1 if -
 * @n: value being checked
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
