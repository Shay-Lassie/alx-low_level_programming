#include <stdio.h>

/**
 * main - program that prints all single-digit number
 * Description: only use putchar 4 times
 * Return: 0
 */

int main(void)
{
	int x = 9;

	for (x = 0; x < 9; ++x)
	{
		putchar ((x % 10) + '0');
		putchar (',');
		putchar (' ');
	}
	putchar ((x % 10) + '0');

	return (0);
}
