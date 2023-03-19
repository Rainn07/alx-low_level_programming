#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/*
* func creates a number and then prints out if the number is 
* positive or negative
*/
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
    if(n==0)
        printf("%d %s\n", n, "is zero\n");
    else if(n>0)
        printf("%d %s\n", n ,"is positive\n");
    else
        printf("%d %s\n", n ,"is negative\n");
    return (0);
}
