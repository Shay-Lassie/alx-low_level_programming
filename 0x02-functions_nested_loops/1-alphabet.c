#include "main.h"

/**
 * _putchar - print lowercase alphabet
 * Description: putchar twice
 * @a: parameter
 * Return: 0
 */

void print_alphabet(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
	}
	putchar('\n');
}
