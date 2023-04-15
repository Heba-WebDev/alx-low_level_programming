#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the min number of coins to make change
 * for an amount of money
 * @argc: the argument count
 * @argv: the arguments
 * Return: 0
 */

int main(int argc, char **argv)
{
int ext;
if (argc == 2)
{
int i;
int sum = 0;
int money = atoi(argv[1]);
ext = 0;
int cents[] = {25, 10, 5, 2, 1};
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
ext = 1;
return (ext);
}
return (0);
}
