#include "lists.h"

/**
* main - Generates and prints passwords for crackme5 exe
* @argc: num of arguments supplied to prog
* @argv: An array of pointers to the arguments
* by: laila
* Return: 0
*/

int main(__silent int argc, char *argv[])
{
	char password[7], *codex;
	int len = strlen(argv[1]), a, temp;

	codex = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";

	temp = (len ^ 59) & 63;
	password[0] = codex[temp];

	temp = 0;
	for (a = 0; a < len; a++)
		temp += argv[1][a];
	password[1] = codex[(temp ^ 79) & 63];

	temp = 1;
	for (a = 0; a < len; a++)
		temp *= argv[1][a];
	password[2] = codex[(temp ^ 85) & 63];

	temp = 0;
	for (a = 0; a < len; a++)
	{
		if (argv[1][a] > temp)
			temp = argv[1][a];
	}
	srand(temp ^ 14);
	password[3] = codex[rand() & 63];

	temp = 0;
	for (a = 0; a < len; a++)
		temp += (argv[1][a] * argv[1][a]);
	password[4] = codex[(temp ^ 239) & 63];

	for (a = 0; a < argv[1][0]; a++)
		temp = rand();
	password[5] = codex[(temp ^ 229) & 63];

	password[6] = '\0';
	printf("%s", password);
	return (0);
}
