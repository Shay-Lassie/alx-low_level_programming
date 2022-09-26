#include "main.h"

/**
 * set_string - set the value of a pointer to a char
 * Description: setting the value of a pointer
 * @s: initial pointer
 * @to: new pointer
 * Return: Always 0
 */

void set_string(char **s, char *to)
{
	*s = to;
}
