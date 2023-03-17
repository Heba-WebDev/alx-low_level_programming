#include<stdlib.h>
#include<time.h>
/* more headers go here*/
/* 
 * main - shows a random number each time the file is executed
 * return: 0 (success)
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if(n == 0)
{
printf("%d is zero\n", n);
}
if(n > 0)
{
printf("%d is positive\n", n);
}
if(n < 0)
{
printf("%d is negative\n", n);
}
return (0);
}
