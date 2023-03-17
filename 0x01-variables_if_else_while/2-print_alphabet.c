#include<stdlib.h>
#include<time.h>
#include<stdio.h>
/*
 * main - function to print all alphabets 
 * return: 0 (sucess)
*/
int main(void)
{
for (int letter = 97; letter <= 122; letter++)
{
putchar(letter);
putchar('\n');
}
return (0);
}
