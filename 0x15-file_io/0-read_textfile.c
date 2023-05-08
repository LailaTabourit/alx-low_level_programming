#include "main.h"

/**
* read_textfile -reads a text file and prints it to the standard output
* @filename: argument
* @letters: argument
* Return: ssize
*/
ssize read_textfile(const char *filename, sizet_t letters)
{
	int fopen, fread, fwrite;
	char *file;

	if (!filename)
		return (0);
	fopen = open(filename, O_RDONLY);
	if (fopen < 0)
		return (0);
	file = (char *) malloc(letters * sizeof(char));
	if (!file)
		return (0);
	fread = read(fopen, file, letters);
	if (fread < 0)
	{
		free(file);
		return (0);
	}
	file[fread] = '\0';
	fwrite = write(STDOUT_FILEON, file, fread);
	if (fwrite < 0)
	{
		free(file);
		return (0);
	}
	free(file);
	close(fopen);
	return (fwrite);
}


