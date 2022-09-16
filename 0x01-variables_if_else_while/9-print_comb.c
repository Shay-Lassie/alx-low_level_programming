#include <stdio.h>

/**
 * main - program that prints all single-digit number
 * Description: only use putchar 4 times
 * Return: 0
 */

int main(void)
{
	int x = 9;

	for (x = 0; x < 10; ++x)
	{
		putchar ((x % 10) + '0');
		if (x == 9)
			continue;
		putchar (',');
		putchar (' ');
		}
	putchar ('\n');


	return (0);
}
