#include "main.h"

/**
 * _puts_recursion - print a string ollowed by a new line
 * Description: similar to the puts stdio function
 * @s: string to print
 * Return: Always 0
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(++s);
}
