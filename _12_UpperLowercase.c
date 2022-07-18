/*12.	Write a program to check whether a given
 alphabet is in uppercase or lowercase.
*/
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a Alphabet:");
    scanf("%c",&ch);
    if(ch>='A' && ch<='Z')
    printf("UpeerCase Alphabet");
    else
    {
        if(ch>='a' && ch<='z');
        printf("Lowercase Alphabet");
    }
    return 0;
} 