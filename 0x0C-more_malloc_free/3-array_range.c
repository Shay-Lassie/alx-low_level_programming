#include "main.h"

/**
 * array_range - create an array of integers
 * Description: ordered from min to max
 * @min: smalest value
 * @max: max
 * Return: pointer to ordered array
 */

int *array_range(int min, int max)
{
	int *a;
	int i = 0;
	int j = 0;
	int sum;

	if (min > max)
		return (NULL);

	sum = max - min;
	a = malloc(sizeof(int) * (sum + 1));
	if (a == NULL)
		return (NULL);
	j = min;
	while (i <= sum)
		a[i++] = j++;

	return (a);
}
