#include "main.h"

/**
 * _abs - calculates the absolute value of int
 * Description: absolute will always be positive
 * @i: value in question
 * Return: i
 */

int _abs(int i)
{
	if (i >= 0)
		i = i;
	else if (i < 0)
		i = -i;
	return (i);
}
