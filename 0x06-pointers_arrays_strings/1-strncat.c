#include "main.h"

/**
 * *_strncat - string concatenator but of partcular parts
 * Description: use n bytes from string 2
 * @src: no need to null terminate if n bytes or more
 * @dest: string 1
 * @n: number of bytes to concatenate
 * Return: dest pointer to final result
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int len = strlen(dest);

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[len + i] = src[i];
	dest[len + i] = '\0';

	return (dest);
}
