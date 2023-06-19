#include "main.h"
#include <stddef.h>

/**
* _strstr - a function that gets matched word
* @haystack: poiter that containes a string to search in
* @needle: poinetr string to look for
* Return: pointer to the beggin of the word matched or
*NULL if nothing matched
*/

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
				break;
		}

		if (!needle[j])
			return (&haystack[i]);
	}

	return (NULL);
}
