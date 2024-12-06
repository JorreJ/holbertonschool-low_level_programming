#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of the file to create
 * @text_content: content of the file to create
 *
 * Return: 1 (success), or -1 (fail)
 */

int create_file(const char *filename, char *text_content)
{
    int o, w;
    if (!filename)
        return (-1);
    o = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
    w = write(o, text_content, strlen(text_content));
    if (o == -1 || w == -1)
        return (-1);
    close(o);
    return (1);
}
