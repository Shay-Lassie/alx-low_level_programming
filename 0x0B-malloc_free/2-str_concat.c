#include "main.h"

/**
 * str_concat - concatenate two strings
 * Description: pointer to new allocated memory space
 * @s1: first string represented
 * @s2: second string then null terminated
 * Return: pointer or null
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0;
	char *ptr = NULL;
	char *str1 = s1;
	char *str2 = s2;

	if (str1 == NULL)
		str1 = "";
	if (str2 == NULL)
		str2 = "";

	ptr = str1;
	while (*ptr++)
		i++;
	ptr = str2;
	while (*ptr++)
		i++;

	i++;
	ptr = malloc(i * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	i = 0;
	while (*str1)
	{
		ptr[i++] = *str1++;
	}

	while (*str2)
		ptr[i++] = *str2++;

	ptr[i] = *str2;

	return (ptr);
}
