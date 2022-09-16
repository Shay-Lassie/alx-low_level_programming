#include <stdio.h>

/**
 * main - print base 16 characters
 * Description: only use putchar three times
 * Return: 0
 */

int main(void)
{
	int x = 0;
	char a;

	for (x = 0; x < 10; ++x)
		putchar ((x % 10) + '0');
	for (a = 'a'; a < 'g'; ++a)
		putchar (a);
	putchar ('\n');

	return (0);

}
