#include "lists.h"


/**
 * main - prints "Hello, Holberton" followed by a new line
 *
 * Return: 0 on success
 */
int main(void)
{
    __asm__ ("movl $0, %%eax\n\t"
             "call _printf\n\t"
             :
             : "r" ("Hello, Holberton\n")
             : "%eax"
            );
    return (0);
}
