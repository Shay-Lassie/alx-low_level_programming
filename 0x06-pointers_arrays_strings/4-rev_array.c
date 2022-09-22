#include "main.h"

/**
 * reverse_array - return array contents from last to first
 * Description: array of n integers
 * @a: array
 * @n: number of elements
 * Return: Always 0
 */

void reverse_array(int *a, int n)
{
	int array[25];
	int i;

	for (i = 0; i < n; i++)
		array[n - 1 - i] = a[i];
	for (i = 0; i < n; i++)
		a[i] = array[i];
}
