/*7.	Write a program to check whether roots of a given quadratic
 equation are real & distinct, real & equal or imaginary roots.
 D>0-Real and distinct;
 D<0- imaginary roots
 D=0-Real and Equal
 fomula for root -D=b*b-4*a*c
*/
#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("Enter a number:");
    scanf("%d%d%d",&a,&b,&c);
    d=b*b-4*a*c;
    if(d>0)
    {
        printf("Roots are Real & Distrint");
    }
    else
    {
        if(d<0)
        printf("Imaginary Roots");
        else
        printf("Roots are Real & Equal");
    }
    return 0;
} 