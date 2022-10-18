#include "main.h"

/**
 * main - prints all arguments as it receives
 * Description: print all arguments including the first one on a new line
 * @argv:the arguments to print
 * @argc: all args, main takes two arguments or none
 * @argv: argumensts t print
 * Return: Always 0
 */

int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
