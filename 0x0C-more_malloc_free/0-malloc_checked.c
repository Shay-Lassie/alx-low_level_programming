#include "main.h"

/**
 * malloc_checked - allocate memory using malloc
 * Description: for fail normal process termination and 98
 * @b: size pf memory to allocate
 * Return: pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *a;

	a = malloc(b);
	if (a == NULL)
		exit(98);

	return (a);
}
