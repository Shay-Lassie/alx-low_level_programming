#include "main.h"

/**
 * _print_rev_recursion - print a string in reverse
 * Description: _putchar in reverse order
 * @s: string to print in reverse
 * Return: Always 0
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(++s);
	_putchar(*s);
}
