#include "main.h"

/**
 * print_alphabet_x10 - prints lowercase alphabet 10 times
 * Description: use putchar twice
 * Return: always 0
 */

void print_alphabet_x10(void)
{
	int i = 0;
	char a;

	while( i < 10 )
	{
		for( a = 'a'; a <= 'z'; a++)
			putchar(a);
		putchar('\n');
		i++;
	}

}
