#include "main.h"

/**
 * _putchar - print lowercase alphabet
 * Description: putchar twice
 * Return: 0
 */

void print_alphabet(void) /* @print_alphabet: function definition */
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
	}
	putchar('\n');
}
