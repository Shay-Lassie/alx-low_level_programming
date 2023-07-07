#include "main.h"

/**
 * _strcmp - compare two strings
 * Description: character by character like builtin fn
 * @s1: string 1
 * @s2: string 2
 * Return: 0 if equal or string 1 is less than 2
 */

int _strcmp(char *s1, char *s2)
{
	int i;
	int x;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
		if (s1[i] == s2[i])
			x = s1[i] - s2[i];
		else if (s1[i] != s2[i])
		{
			x = s1[i] - s2[i];
			break;
		}
	if (x < 0)
		return (x);
	else if (x == 0)
		return (0);
	else
		return (x);
}
