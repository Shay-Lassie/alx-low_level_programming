#include "main.h"

/**
 * print_number - prints an integer
 * Description: print using _putchar
 * @n: integer
 * Return: Always 0
 */

void print_number(int n)
{
	unsigned int x;
	unsigned int c;
	unsigned int num;

	if (n < 0)
	{
		_putchar(45);
		x = n * -1;
	}
	else
	{
		x = n;
	}

	c = x;
	num = 1;

	while (c > 9)
	{
		c /= 10;
		num *= 10;
	}

	for (; num >= 1; num /= 10)
	{
		_putchar(((x / num) % 10) + 48);
	}
}
