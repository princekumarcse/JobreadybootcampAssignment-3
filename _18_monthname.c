/*18.Write a program which takes the month number 
as an input and display number of days in that month 
*/
#include<stdio.h>
int main()
{
    int x;
    printf("Enter Month number:");
    scanf("%d",&x);
    if(x==1)
    {
        printf("31 Days");
    }
    else
    if(x==2)
    {
        printf("28 or 29 Days");
    }
    else
    {
        if(x==3)
        {
            printf("31 Days");
        }
        else
        {
            if(x==4)
            printf("30 Days");
            else
            {
               if(x==5)
               printf("31 Days");
               else
               {
                if(x==6)
                printf("30 Days");
                else
                {
                    if(x==7)
                    printf("31 Days");
                    else
                    if(x==8)
                    printf("31 Days");
                    else
                    {
                        if(x==9)
                        printf("30 Days");
                        else
                        if(x==10)
                        printf("31 Days");
                        else
                        if(x==11)
                        printf("30 Days");
                        else
                        if(x==12)
                        printf("31 Days");
                        else
                        printf("Invalid ! Enter valid month number:");
                    }
                }

               }
            }
        }
    }
    return 0;
}