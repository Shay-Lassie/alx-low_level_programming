#include "main.h"

/**
 * _strlen_recursion - return the length of a string
 * Description: similar to strlen
 * @s: string
 * Return: Always 0
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(++s));
	}
	return (0);
}
