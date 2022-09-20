#include "main.h"
#include <stdio.h>

/**
 * swap_int - swap the values of two integers
 * Description: prototype in main.h
 * @a: integer a
 * @b: integer b
 * Return: 0
 */

void swap_int(int *a, int *b)	/* declared in main now being defined */
{
	int c = *a;

	*a = *b;	/*  @a: looks like should be declared twice */
	*b = c;	/* @b: swapped */
}
