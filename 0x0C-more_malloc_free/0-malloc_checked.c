#include "main.h"

/**
 * malloc_checked - allocate memory using malloc
 * Description: for fail normal process termination and 98
 * @b: size pf memory to allocate
 * Return: pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	int *xx;

	xx = malloc(b);
	if (xx == NULL)
		exit(98);

	return (xx);
}
