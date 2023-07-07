#include "main.h"

/**
 * main - adds positive numbers
 * Description: error for non numbers and 0 for nothing
 * @argc: number of arguments passed
 * @argv: string of passed numbers
 * Return: Always 0
 */

int main(int argc, char **argv)
{
	int i = 1;
	int ans = 0;

	if (argc < 1)
		return (0);

	for (i = 1; i < argc; i++)
	{
		if (!atoi(argv[i]))
		{
			printf("%s\n", "Error");
			return (1);
		}
		ans += atoi(argv[i]);
	}
	printf("%d\n", ans);

	return (0);
}
