#include "main.h"
/**
 * _strspn - a function that gets the lenght of a prefix sub string
 * @s: string evaluate
 * @accept: pointer contain list of char to match in s
 * Return: number of byts
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, flag, f = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		flag = 0;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				f++;
				flag = 1;
			}
		}

		if (flag == 0)
		{
			return (f);
		}
	}

	return (0);
}

