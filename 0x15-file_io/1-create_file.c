#include "main.h"


/**
 * create_file - creates a file
 * @filename: the name of the file
 * @text_content: the content of the file
 *
 * Return: (1) on success and (0) on failure
 */



int create_file(const char *filename, char *text_content)
{
int descriptor;
ssize_t num_written;

if (filename == NULL)
{
return (-1);
}

descriptor = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

if (text_content != NULL)
{
num_written = write(descriptor, text_content, strlen(text_content));
if (num_written == -1)
{
return (-1);
}
}

close(descriptor);
return (1);
}
