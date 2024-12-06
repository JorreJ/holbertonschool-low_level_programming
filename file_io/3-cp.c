#include "main.h"

/**
 * close_func - close file and check success
 * @file: file to close
 */

void close_func(int file)
{
	int c;

	c = close(file);
	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", file);
		exit(100);
	}
}

/**
 * main - copy content of a file to another file
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (success)
 *
 * Exit code: 97, incorrect argument count
 * 98, file_from can not be read
 * 99, file_to can not be written
 * 100, file can not be closed
 */

int main(int argc, char *argv[])
{
	int ofrom, oto, r, w;
	char *text;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	if (!argv[1])
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	text = malloc(sizeof(char) * 1024);
	if (!text)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s", argv[2]);
		exit(99);
	}
	ofrom = open(argv[1], O_RDONLY);
	r = read(ofrom, text, 1024);
	if (ofrom == -1 || r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from %s\n", argv[1]);
		exit(98);
	}
	oto = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	w = write(oto, text, r);
	if (oto == -1 || w == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s", argv[2]);
		exit(99);
	}
	free(text);
	close_func(ofrom);
	close_func(oto);
	return (0);
}
