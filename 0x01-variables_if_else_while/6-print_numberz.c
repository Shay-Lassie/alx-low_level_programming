#include <stdio.h>

/**
 * main - print base 10 numbers
 * Description: only use 2 putchars
 * Return: 0
 */

int main(void)
{
	int i = 0;

	for (i = 0; i < 10; ++i)
	{
		putchar ((i % 10) + '0');
	}
	putchar ('\n');

	return (0);
}



