#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
* main - main function
* @argc: argument
* @argv: argument
*
* by: lailitaaa
* Return: always 0
*/
int main(int argc, char *argv[])
{
	int num1, num2;
	char *operator;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operator = argv[2];

	if (operator[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if (!get_op_func(operator))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(operator)(num1, num2));

	return (0);
}
