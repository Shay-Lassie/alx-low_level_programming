#include "main.h"

/**
 * *cap_string - Capitalize all words of a string
 * Description: Capitalize words
 * @s: string of words
 * Return: *s pointer to s the capitalised string
 */

char *cap_string(char *s)
{
	int i = 0, j;
	char a[] = " \t\n,;.!?\"(){}";

	while (*(s + i))
	{
		if (*(s + i) >= 'a' && *(s + i) <= 'z')
		{
			if (i == 0)
			{
				*(s + i) -= 'a' - 'A';
			}
			else
			{
				for (j = 0; j <= 12; j++)
					if (a[j] == *(s + i - 1))
						*(s + i) -= 'a' - 'A';
			}
		}
		i++;
	}

	return (s);
}
