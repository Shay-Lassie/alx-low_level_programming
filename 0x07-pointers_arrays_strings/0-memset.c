#include "main.h"

/**
 * _memset - fill memory with a constant byte
 * Description: fill the first n bytes of memory area pointed to by s
 * @s: address of variable b of char type
 * @b: char type variable
 * @n: specific number of bytes to fill n
 * Return: **s pointer to pointer s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;
	char *pointer = s;

	while (i < n)
	{
		*s++ = b;
		i++;
	}

	return (pointer);
}
