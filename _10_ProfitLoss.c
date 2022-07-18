/*10.Write a program which takes
 the cost price and selling price 
 of a product from the user. 
 Now calculate and print profit or loss percentage. 
 */
#include<stdio.h>
int main()
{
    int cp , sp ;
    float prof , loss ;
    printf("Enter Cost price:&Selling price:");
    scanf("%d%d",&cp,&sp);
    if(sp>cp)
    {
        
        prof=sp-cp;
        prof= (prof*100)/cp ;
        printf("Profit is %.1f%%",prof);
    }
    else
    {
        loss=cp-sp;
        loss=(loss*100)/cp ;
        printf("Loss  is %.1f%% ",loss);
    }
    return 0;
}