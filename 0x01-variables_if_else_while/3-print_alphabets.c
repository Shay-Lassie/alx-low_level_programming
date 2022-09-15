#include <stdio.h>

/**
 * main - print the alphabet in LC and UC
 * Description: loop through the alphabet
 * Return: 0
 */

int main (void)
{
	char a;
	for (a = 'a'; a <= 'z'; ++a)
		putchar (a);
	for (a = 'A'; a <= 'Z'; ++a)
		putchar (a);
	putchar ('\n');

	return (0);
}
