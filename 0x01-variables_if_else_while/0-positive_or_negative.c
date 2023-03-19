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
char str1[]= "is negative";
char str2[]= "is zero";
char str3[]= "is positive";

    if(n==0)
        printf("%d %s\n", n, str2);
    else if(n>0)
        printf("%d %s\n", n ,str3);
    else
        printf("%d %s\n", n ,str1);
    return (0);
}
