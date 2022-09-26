#include "main.h"

/**
 * _strpbrk - search for a set of bytes
 * Description: locate the first ocurence of the bytes in accept
 * @s: string to be searched for the bytes
 * @accept: bytes being searched for
 * Return: * to the address in s or Null
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				break;
		}
		if (accept[j])
			return (s + i);
	}
	return (0);
}
