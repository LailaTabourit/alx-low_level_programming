#include <stdio.h>
#include <stdlib.h>

/**
* main - print the number of arguments passed into it
*
* @argc: variable
* @argv: variable
*
* by: laila tabourit
*
* Return: always 0
*/

int main(int argc, char *argv[]__attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}

