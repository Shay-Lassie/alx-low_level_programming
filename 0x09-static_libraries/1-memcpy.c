#include "main.h"

/**
 * _memcpy - copy n bytes from *src to *dest
 * Description: copy from one pointer to another
 * @dest: destination pointer
 * @src: from
 * @n: number of bytes being copied
 * Return: *dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}

	return (dest);
}
