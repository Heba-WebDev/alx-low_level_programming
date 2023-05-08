#include "main.h"
#define BUF_SIZE 1024
#define PERMISSIONS (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)
/**
 * main - program
 * @args: argument count
 * @av: argument vector
 *
 * Return: 1 on success 0 on failure
 */

int main(int args, char **av)
{
int from = 0, to = 0;
ssize_t b;
char buf[BUF_SIZE];

if (args != 3)
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
from = open(av[1], O_RDONLY);
if (from == -1)
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, PERMISSIONS);
if (to == -1)
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);

while ((b = read(from, buf, BUF_SIZE)) > 0)
if (write(to, buf, b) != b)
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
if (b == -1)
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);

from = close(from);
to = close(to);
if (from)
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from), exit(100);
if (to)
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from), exit(100);

return (EXIT_SUCCESS);
}
