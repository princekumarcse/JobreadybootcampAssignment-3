/*5.Write a program to check whether a given
 number is a three-digit number or not. 
 */
#include<stdio.h>
int main()
{
 int x,count=0;
 printf("Enter a number:");
 scanf("%d",&x);
 while(x)
 {
    int rem=x%10;
    count++;
    x=x/10;
 }
 if(count==3)
 {
    printf(" number is Three digit number");
 }
 else
 {
   printf(" number is not three digit number");
 }
 return 0;
}