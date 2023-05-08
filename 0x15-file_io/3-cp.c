#include "main.h"

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - Alloccates 1024 bytes for a buffer.
 * @file: name of file
 *
 * Return: pointer
 */

char *create_buffer(char *file)
{
	char *buf;

	buf = malloc(sizeof(char) * 1024);

	if (buf == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buf);
}

/**
 * close_file - Closes file descriptors.
 * @fd: d file descriptor to be closed.
 */

void close_file(int fd)
{
	int ch;

	ch = close(fd);

	if (ch == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Copies d contents of a file to another file.
 * @argc: The number of arguments.
 * @argv: pointer to argument
 * Return: 0 success.
 *
 * Description: If the argument count is incorrect - exit code 97.
 * If file_from does not exist or cannot be read - exit code 98.
 * If file_to cannot be created or written to - exit code 99.
 * If file_to or file_from cannot be closed - exit code 100.
 */

int main(int argc, char *argv[])
{
	int frm, t, rd, wt;
	char *buf;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buf = create_buffer(argv[2]);
	frm = open(argv[1], O_RDONLY);
	rd = read(frm, buf, 1024);
	t = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (frm == -1 || rd == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buf);
			exit(98);
		}

		wt = write(t, buf, rd);
		if (t == -1 || wt == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buf);
			exit(99);
		}

		rd = read(frm, buf, 1024);
		t = open(argv[2], O_WRONLY | O_APPEND);

	} while (rd > 0);

	free(buf);
	close_file(frm);
	close_file(t);

	return (0);
}
