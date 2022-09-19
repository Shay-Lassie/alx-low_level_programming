#include <stdio.h>

void print_put(void)
{
	printf ("_putchar\n");
}

void print_alphabet(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
		putchar(a);
	putchar('\n');
}
