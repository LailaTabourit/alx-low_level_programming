#include <stdio.h>
#include <stdlib.h>

/**
* main - Entry point
* @argc: vriable
* @argv: variable pointer
* by: laila tabourit
* Return: Always 0 (Success)
*/

int main(int argc, char *argv[])
{
	int coins[] = {25, 10, 5, 2, 1};
	int i, result, count = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	result = atoi(argv[1]);

	if (result <= 0)
	{
		printf("0\n");
		return (0);
	}


	for (i = 0; i < 5; i++)
	{
		while (result >= coins[i])
		{
			result -= coins[i];
			count++;
		}
	}

	printf("%d\n", count);
	return (0);
}
