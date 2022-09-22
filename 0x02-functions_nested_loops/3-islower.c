#include "main.h"

/**
 * _islower - prints 1 if lowercase, else 0
 * Description: checks for lowercase characters
 * Return: Always 0
 * @c: variable to be checked
 */

int _islower(int c)
{
	if (c <= 'z')
		printf("1");
	else
		printf("0");

	return (1);
}
