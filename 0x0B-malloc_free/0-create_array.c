#include "main.h"

/**
 * create_array - an array of chars initialised
 * Description: with a specific char
 * @size: number of elements in the array
 * @c: character for initialisation
 * Return: pointer to the array and NULL if size is 0
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i = 0;

	if (size == 0)
	{
		return (NULL);
	}

	arr = malloc(sizeof(char) * size);
	if (arr == NULL)
	{
		return (NULL);
	}

	while (size--)
	{
		arr[i++] = c;
	}

	return (arr);
}
