#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints the min number of coins to make change
 * for an amount of money
 * @argc: the argument count
 * @argv: the arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
int i;
int sum = 0;
int money = atoi(argv[1]);
int cents[] = {25, 10, 5, 2, 1};
if (money < 0)
{
printf("0\n");
return (0);
}
if (argc == 2)
{
for (i = 0; i < 5; i++)
{
if (money >= cents[i])
{
sum += money / cents[i];
money = money % cents[i];
if (money % cents[i] == 0)
{
break;
}
}
}
printf("%d\n", sum);
}
else
{
printf("Erro\n");
return (1);
}
return (0);
}
