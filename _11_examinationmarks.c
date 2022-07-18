/*11.Write a program to take marks of 5 subjects from the user.
 Assume marks are given out of 100 and passing marks is 33.
  Now display whether the candidate passed the examination or failed
*/
#include<stdio.h>
int main()
{
    int phy,chem,hin,math,eng;
    printf("Enter Physics:Chemistry:Hindi:Maths:English marks:");
    scanf("%d%d%d%d%d",&phy,&chem,&hin,&math,&eng);
    if(phy<33)
    printf("You are Failled");
    else
     {
        if(chem<33)
        {
            printf("You are Failled");
        }
        else 
        {
            if(hin<33)
           {
            printf("Ypu are Failled");
           } 
            else
            {
                if(math<33)
                {
                    printf("You are Failled");
                }
                else
                {
                    if(eng<33)
                    {
                        printf("You are Failled");
                    }
                    else
                    {
                        printf("You are Pass");
                    }

                }

            }
            

        }
     }
    return 0;
}