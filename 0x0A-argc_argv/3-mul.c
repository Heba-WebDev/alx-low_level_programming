#include <stdio.h>
#include <stdlib.h>
/**
* main - multiplies two numbers
* @argc: arguments count
* @argv: arguments
* Return: (0)
*/
int main(int argc, char **argv)
{
int i;
if ( argc <= 2)
{
printf("Error\n");
return (1);
}
else
{
i = atoi(argv[1]) * atoi(argv[2]);
printf("%i\n", i);
}
return (0);
}
