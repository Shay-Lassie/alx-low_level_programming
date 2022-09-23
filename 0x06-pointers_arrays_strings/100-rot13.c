#include "main.h"

/**
 * rot13 - encode a string using rot13
 * Description: if once, two loops, no switch or ternary
 * @s: string
 * Return: *s pointer to s encoded string
 */

char *rot13(char *s)
{
	int i, j;
	char a[] = "abcdefghijklmnopdrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char b[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; *(s + i); i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (a[j] == *(s + i))
			{
				*(s + i) = b[j];
				break;
			}
		}
	}

	return (s);
}
