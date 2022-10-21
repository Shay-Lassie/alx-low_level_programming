#include "main.h"

/**
 * *string_toupper - converts all lowercase to upper
 * Description: same as toupper builtin
 * @s: lowercase string
 * Return: s the uppercase result
 */

char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		if ((s[i] >= 'a') && (s[i] <= 'z'))
			s[i] = s[i] - 32;
	return (s);
}
