#include "main.h"

/**
 * print_square - print a square then a new line
 * Description: use the hash char
 * @size: square size
 * Return: null
 */

void print_square(int size)
{
	int a, b;

	if (size > 0)
	{
		for (a = 0; a < size; a++)
		{
			for (b = 0 ; b < size ; b++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
