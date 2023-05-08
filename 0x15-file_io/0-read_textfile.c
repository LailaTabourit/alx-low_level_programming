#include "main.h"

/**
* read_textfile -reads a text file and prints it to the standard output
* @filename: argument
* @letters: argument
* Return: ssize
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fopen, fread, fwrite;
	char *file;

	fopen = open(filename, O_RDONLY);
	if (fopen == -1)
		return (0);
	file = malloc(letters * sizeof(char));
	if (!file)
		return (0);
	fread = read(fopen, file, letters);
	fwrite = write(STDOUT_FILENO, file, fread);

	free(file);
	close(fopen);
	return (fwrite);
}


