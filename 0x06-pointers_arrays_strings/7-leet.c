#include "main.h"

/**
 * leet - encode a string into 1337
 * Description:replace a & A with 4, e & E with 3,
 * o and O with 0, t and T with 7, l and L with 1
 * @s: string
 * Return: *s encoded string
 */

char *leet(char *s)
{
	int i, j;
	char a[] = "aAeEoOtTlL";
	char b[] = "4433007711";

	for (i = 0; *(s + i); i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (a[j] == *(s + i))
				*(s + i) = b[j];
		}
	}

	return (s);
}
