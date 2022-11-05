#include "main.h"

/**
 * *_strncpy - copy a string
 * Description: works like strncpy builtin function
 * @dest: string 1
 * @src: string 2
 * @n: int
 * Return: dest final string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
