#include "main.h"

/**
 * main - minimum number of coins to give change
 * Description: get amount of money from apssed arguments
 * @argc: ndiye argc
 * @argv: ndiargv
 * Return: Always 0
 */

int main(int argc, char **argv)
{
	int money = 0;
	int change = 0;

	if (argc < 2)
	{
		printf("%s\n", "Error");
		return (1);
	}
	change = atoi(argv[1]);

	for (money = 0; change > 0; money++)
	{
		if (change - 25 >= 0)
			change = change - 25;
		else if (change - 10 >= 0)
			change = change - 10;
		else if (change - 5 >= 0)
			change = change - 5;
		else if (change - 2 >= 0)
			change = change - 2;
		else if (change - 1 >= 0)
			change = change - 1;
	}
	printf("%d\n", money);

	return (0);
}
