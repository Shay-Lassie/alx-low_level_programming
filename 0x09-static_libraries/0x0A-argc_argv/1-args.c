#include "main.h"

/**
 * main - print the number of arguments
 * Description: followed by a new line
 * @argc: number to print
 * @argv: arguments array for what to count
 * Return: Always 0
 */

int main(int argc, __attribute__((unused)) char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
	}
	printf("%d\n", i - 1);
	return (0);
}
