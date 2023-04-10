#include <stdio.h>
#include <stdlib.h>

/**
* main - prints all @i argumments it receives
* @argc: variable
* @argv: variable
*
* by: laila tabourit
* Return: always 0
*/

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
