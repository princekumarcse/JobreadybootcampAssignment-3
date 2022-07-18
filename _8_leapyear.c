/*8.	Write a program to check whether a given
 year is a leap year or not. 
*/
#include<stdio.h>
int main()
{
    int year;
    printf("Enter Year:");
    scanf("%d",&year);
    if(year%100)
    {
        if(year%4)
        printf("Not a leap year");
        else
        printf("It is a leap year");
    }
    else
    {
        if(year%400)
            printf("Not  a leap year");
        else
        printf("It is a leap year");
    }
    return 0;
}