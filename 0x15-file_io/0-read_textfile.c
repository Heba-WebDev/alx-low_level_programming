#include "main.h"


/**
 * read_textfile -  reads a text file and prints it to the POSIX standard output
 * @filename: the name of the file
 * @letters:  the number of letters it should read and print
 *
 * Return:number of letters it could read and print
 */


ssize_t read_textfile(const char *filename, size_t letters)
{

FILE* myfile;

if (filename == NULL)
{
return (0);
}
}
