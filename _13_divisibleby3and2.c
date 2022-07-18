/*13.	Write a program to check whether a given 
number is divisible by 3 and divisible by 2. 
*/
#include<stdio.h>
int main()
{
    int x;
    printf("Enter a Number:");
    scanf("%d",&x);
   if(x>0)
   printf("Number is Positive");
   else
     {
       if(x<0)
       printf("Number is Negative");
       else
       printf("Number is Zero");
     }
     return 0;
} 