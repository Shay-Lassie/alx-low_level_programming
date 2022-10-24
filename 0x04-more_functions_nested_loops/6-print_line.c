#include "main.h"

/**
 * print_line - draw a straight line in the terminal
 * Descrription: print underscore n times then \n
 * @n: number of times to print _
 * Return: nothing
 */

void print_line(int n)
{
	int i = 1;

	while (i <= n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
