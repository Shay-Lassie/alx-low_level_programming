#include <stdio.h>

/**
 * main - 3 digit combinations
 * Description: use putchar six times
 * Return: 0
 */

int main(void)
{
	int x = 0 ;
	int y = 0;
	int z = 0;

	for (x = 0; x < 8; x++)
	{
		for (y = x + 1; y < 9; y++)
		{
			for (z = y + 1; z < 10; z++)
			{
				putchar ((x % 10) + '0');
				putchar ((y % 10) + '0');
				putchar ((z % 10) + '0');
				if (x == 7 && y == 8 && z == 9)
					continue;
				putchar (',');
				putchar (' ');
			}
		}
	}
	putchar ('\n');

	return (0);
}
