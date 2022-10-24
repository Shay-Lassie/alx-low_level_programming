#include "main.h"

/**
 * _isdigit - cheeckss for a digit
 * Description: if the supplied c is a digit, isdigit function
 * @c: to be checked
 * Return: 1 if digit, otherwise 0
 */

int _isdigit(int c)
{
	if ((c <= '9') && (c >= '0'))
		return (1);
	else
		return (0);
}
