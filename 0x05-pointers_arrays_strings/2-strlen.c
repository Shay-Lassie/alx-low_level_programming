#include "main.h"

/**
 * _strlen - returns the length of a string
 * Description: computes the length
 * @s: the string 
 * Return: i which string length
 */

int _strlen(char *s)
{
	int i = 0;

	while (*(s + i))
		i++;

	return (i);
}
