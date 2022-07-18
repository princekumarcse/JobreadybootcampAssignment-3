/*
14.	Write a program to check whether a given 
number is divisible by 7 or divisible by 3. 
*/
#include<stdio.h>
int main()
{
    int x;
    printf("Enter a Number:");
    scanf("%d",&x);
    if(x%7==0 || x%3==0)
    printf("%d is diviible");
    else
    printf("%d is Not divisible");
    return 0;
}