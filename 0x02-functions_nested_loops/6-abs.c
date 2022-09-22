#include "main.h"

/**
 * _abs - calculates the absolute value of int
 * Description: absolute will always be positive
 * Return : i which is the value we want to produce after computation
 * @i: value in question
 */

int _abs(int i)
{
	if (i >= 0)
		i = i;
	else if (i < 0)
		i = -i;
	return (i);
}
