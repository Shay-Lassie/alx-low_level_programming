#include "main.h"

/**
 * argstostr - concatenate all arguments of program
 * Description: each argument seperated by a new line
 * @ac: altenating current args
 * @av: no such thing as alternating voltage
 * Return: pointer or NULL
 */

char *argstostr(int ac, char **av)
{
	int num = 0;
	int i;
	int j = 0;
	int k = 0;
	char *ptr = NULL;

	if (ac == 0 || av == 0)
		return ('\0');

	for (i = 0; i < ac; i++)
	{
		while (av[i][k] != '\0')
		{
			num = num + 1;
			k++;
		}
		num++;
		k = 0;
	}

	num++;
	ptr = malloc(num * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		while (av[i][k] != '\0')
		{
			ptr[j++] = av[i][k];
			k++;
		}
		ptr[j++] = '\n';
		k = 0;
	}
	ptr[j] = '\0';

	return (ptr);
}
