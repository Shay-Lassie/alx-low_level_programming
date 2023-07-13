#include "main.h"

/**
 * _strlen - length of string
 * @s: the string
 * Return: length of string s
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}

/**
 * string_nconcat - concatente two strings
 * Description: treat Null as empty string
 * @s1: string to add to
 * @s2: string to add
 * @n: if n >  length of s2, use s2
 * Return: concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *a;
	unsigned int s1strlen;
	unsigned int s2strlen;
	unsigned int i, j;
	char nul = '\0';
	int tots;

	if (s1 == NULL)
		s1 = &nul;
	if (s2 == NULL)
		s2 = &nul;

	s1strlen = _strlen(s1);
	s2strlen = _strlen(s2);

	if (n >= s2strlen)
		tots = s2strlen + s1strlen;
	else
		tots = s1strlen + n;

	a = malloc(tots + 1);
	if (a == NULL)
		return (NULL);

	i = 0;
	j = 0;

	while (s1[i] != '\0')
		a[j++] = s1[i++];
	i = 0;
	while (s2[i] != '\0' && n-- != 0)
		a[j++] = s2[i++];
	a[j] = '\0';

	return (a);
}
