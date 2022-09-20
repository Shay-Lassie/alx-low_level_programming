#include "main.h"
#include <stdio.h>

/**
 * swap - swap the values of two integers
 * Description: prototype in main.h
 * @a - integer a
 * @b - integer b
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
