#include "main.h"

/**
 * _isalpha - checks for alphabet
 * Description: returns 1 if a letter, else 0
 * Return: Always 0
 * @c: being checked
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
