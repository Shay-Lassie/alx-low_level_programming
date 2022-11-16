#include <stdio.h>

/**
 * main - prints name of file it was compiled from
 * Description: followed by new line
 * Return: file name
 */

int main(void)
{
	printf("%s\n", __FILE__);

	return (0);
}
