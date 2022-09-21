#include "main.h"

/**
 * _putchar - print lowercase alphabet
 * Description: putchar twice
 * @print_alphabet: function definition
 * Return: 0
 */

void print_alphabet(void) /* @print_alphabet: function definition */
{ /* tried to describe in main.h butr no changes */
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
	}
	putchar('\n');
}
