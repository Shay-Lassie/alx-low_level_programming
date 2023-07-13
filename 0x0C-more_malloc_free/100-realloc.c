#include "main.h"

/**
 * _realloc - reallocates a block of memory using malloc and free
 * Description: contents copied to new memory location in order from n
 * @ptr: pointer of previous address
 * @old_size: size for ptr in bytes
 * @new_size: size of new block
 * Return: pointer to new or NULL
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *s;

	if (new_size > old_size)
	{
		s =  malloc(new_size);
		free(ptr);
		return (s);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		s = malloc(new_size);
		free(ptr);
		return (s);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	return (ptr);
}
