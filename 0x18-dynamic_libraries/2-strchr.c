#include "main.h"

/**
 * _strchr - locate a character in a string
 * Description: returns pointer to the first occurence of charcter c
 * @s: string
 * @c: character to look for
 * Return: *c or NULL if not found
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *(s + i); i++)
	{
		if (*(s + i) == c)
			return (s + i);
	}
	if (*(s + i) == c)
		return (s + i);

	return (0);
}
