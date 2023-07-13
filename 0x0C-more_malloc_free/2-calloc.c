#include "main.h"

/**
 * _calloc - print a 2D grid of 0s
 * @nmemb: numbr of elements for the 2D array
 * @size: dimensions of the arrat
 * Return: pointer to array
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	a = malloc(nmemb * size);
	if (a == NULL)
		return (NULL);

	while (i < (nmemb * size))
		a[i++] = 0;

	return (a);
}
