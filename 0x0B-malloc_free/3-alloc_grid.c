#include "main.h"

/**
 * alloc_grid - pouibnter to a 2dimensional array pf integers
 * Description: each grid element intialised by 0
 * @width: size of array
 * @height: size
 * Return: NULL on failure or pointer
 */

int **alloc_grid(int width, int height)
{
	int i;
	int j;
	int **arr;

	if (width == 0 || height == 0)
		return (NULL);

	arr = malloc(height * sizeof(int));
	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(width * sizeof(int));
		if (arr[i] == NULL)
		{
			for (i = i - 1; i >= 0; i--)
				free(arr[i]);
			free(arr);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			arr[i][j] = 0;
	}

	return (arr);
}
