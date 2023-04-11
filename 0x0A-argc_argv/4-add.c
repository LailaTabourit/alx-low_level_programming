#include <stdio.h>
#include <stdlib.h>

/**
* is_digits - checks if the arguments
* @c:variable
* by: laila
* Return: value
*/

int is_digits(char *c)
{
	int i = 0;

	while (c[i])
	{
		if (!(c[i] >= '0' && c[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}

/**
* main -adds positive numbers
*
* @argc: variable
* @argv: variable
*
* by: laila tabourit
* Return: succes (0), error (1)
*/

int main(int argc, char *argv[])
{
	int i = 1;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	while (argv[i])
	{
		if (!is_digits(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
