#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content: text to append
 *
 * Return: 1 (success), or -1 (fail)
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int o, w;

	if (!filename)
		return (-1);
	o = open(filename, O_WRONLY | O_APPEND);
	if (text_content)
		w = write(o, text_content, strlen(text_content));
	if (o == -1 || w == -1)
		return (-1);
	close(o);
	return (1);
}
