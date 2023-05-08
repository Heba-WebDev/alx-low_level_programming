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
int descriptor, num_written, length = 0;

if (filename == NULL)
return (-1);

if (text_content != NULL)
{
for (length = 0; text_content[length];)
length++;
}

descriptor = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
num_written = write(descriptor, text_content, length);

if (descriptor == -1 || num_written == -1)
return (-1);

close(descriptor);

return (1);
}
