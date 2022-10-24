#ifndef main.h
#define main.h

/**
 * _isupper - cheecks for uppercase character
 * @c: character to check
 * Description: similar to isupper function
 * Return: 1 if c is uppercase or 0
 */

int _isupper(int c)
{
	for (c = 'A'; c < 'Z'; c++)
	{
		if (c <= 'Z')
			return (1);
		else
			return (0);
	}

	return (0);
}
