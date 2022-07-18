/*6.	Write a program to print greater between two numbers.
 Print one number of both are the same.
*/
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter Two number:");
    scanf("%d %d",&a,&b);
    if(a>b)
    {
        printf("%d is Greater",a);
    }
    else
    {
        printf("%d is gretaer",b);
    }
    return 0;
} 