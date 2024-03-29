#include "main.h"

/**
 * main - multiply two numbers
 * Description: if program does not receive two arguments print error
 * @argc: same old
 * @argv: same old
 * Return: Always 0
 */

int main(int argc, char **argv)
{
	int i = 1;
	int ans = 1;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			ans *= atoi(argv[i]);
		}
		printf("%d\n", ans);
	}

	return (0);
}
