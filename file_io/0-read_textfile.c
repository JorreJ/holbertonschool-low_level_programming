#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the text file to read
 * @letters: number of letters to read and print
 *
 * Return: number of letters that can be read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *text;

	if (!filename)
		return (0);
	text = malloc(sizeof(char) * letters);
	if (!text)
		return (0);
	o = open(filename, O_RDONLY);
	r = read(o, text, letters);
	w = write(STDOUT_FILENO, text, r);
	free(text);
	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		return (0);
	}
	close(o);
	return (w);
}
