#include "main.h"


/**
 * read_textfile -  reads a text file and prints it to standard output
 * @filename: the name of the file
 * @letters:  the number of letters it should read and print
 *
 * Return:number of letters it could read and print
 */


ssize_t read_textfile(const char *filename, size_t letters)
{
int descriptor;
ssize_t num_read, num_written;
char *buffer;

if (filename == NULL)
return (0);
descriptor = open(filename, O_RDONLY);
buffer = malloc(sizeof(char) * letters);
if (descriptor == -1 || buffer == NULL)
return (0);
num_read = read(descriptor, buffer, letters);
if (num_read == -1)
return (0);

num_written = write(STDOUT_FILENO, buffer, num_read);

if (num_written == -1 || num_written != num_read)
return (0);

close(descriptor);
free(buffer);

return (num_written);
}
