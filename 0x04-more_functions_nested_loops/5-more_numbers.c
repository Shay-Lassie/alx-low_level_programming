#include "main.h"

/**
 * more_numbers - print 0 to 14 then new line
 * Description: do it 10 times
 * Return: nothing
 */

void more_numbers(void)
{
	int c;
	int a;

	for (a = 0; a < 10; a++)
	{
		for (c = 0; c < 15; c++)
		{
			if (c > 9)
			_putchar(c / 10 + '0');
			_putchar(c % 10 + '0');
		}
		_putchar('\n');
	}

}
