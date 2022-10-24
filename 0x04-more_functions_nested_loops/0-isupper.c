#include "main.h"

/**
 * _isupper - cheecks for uppercase character
 * @c: character to check
 * Description: similar to isupper function
 * Return: 1 if c is uppercase or 0
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	else
		return (0);
}
