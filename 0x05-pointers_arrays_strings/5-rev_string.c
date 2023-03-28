#include "main.h"

/**
 * rev_string - a functio that reverse a string
 * @s: pointer variable
 * Return: void return nothing
 */

void rev_string(char *s)
{
	int i, len, len2;
	char temp;

	len = 0;
	len2 = 0;
	while (s[len] != '\0')
	{
		len++;
	}

	len2 = len - 1;

	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len2];
		s[len2--] = temp;
	}
}
