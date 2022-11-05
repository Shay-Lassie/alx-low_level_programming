#include "main.h"

/**
 * *_strcat - concatenates two strings
 * Description: append string 2 to string 1
 * @dest: string 1
 * @src: string 2
 * Return: *dest pointer to final string
 */

char *_strcat(char *dest, char *src)
{
	int len = strlen(dest);
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[len + i] = src[i];
	dest[len + i] = '\0';

	return (dest);
}
