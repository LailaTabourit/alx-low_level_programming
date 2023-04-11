#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
* main - print the result of the multiplication
*
* @argc: variable
* @argv: variable
*
* by: laila tabourit
* Return: always 0
*/

int main(int argc, char *argv[])
{

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
