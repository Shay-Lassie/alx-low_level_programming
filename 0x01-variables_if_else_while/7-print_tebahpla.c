#include <stdio.h>

/**
 * main - lowercase alphabet in reverse
 * Description: only use putchar and twice
 * Return: 0
 */

int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
		putchar (c);
	putchar('\n');

	return (0);
}
