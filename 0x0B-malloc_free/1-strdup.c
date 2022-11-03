#include "main.h"

/**
 * _strdup - return pointer to newly allocated memory space
 * Description: Space contains a copy of string
 * @str: parameter that is string
 * Return:pointer or null
 */

char *_strdup(char *str)
{
	char *ptr = str;
	int num = 0;

	if (str == NULL)
		return (NULL);

	while (*ptr++ != '\0')
		num = num + 1;

	ptr = malloc((num + 1) * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	num = 0;
	while (*str)
		ptr[num++] = *str++;

	ptr[num] = *str;

	return (ptr);
}
