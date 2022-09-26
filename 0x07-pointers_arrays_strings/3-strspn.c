#include "main.h"

/**
 * _strspn - get the length of a prefix substring
 * Description: returns the number of bytes from s only consisting of accept
 * @s: string
 * @accept: the prefix substring
 * Return: number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	unsigned int j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				break;
		}
		if (!accept[j])
			break;
	}
	return (i);
}
