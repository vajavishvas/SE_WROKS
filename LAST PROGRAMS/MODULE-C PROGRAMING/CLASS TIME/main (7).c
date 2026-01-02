#include<stdio.h>
#include<conio.h>
void main()
{
    int a;
    
    printf(" Enter your marks ");
    scanf("%d",&a);
    
    if(a>=35)
    {
        printf(" \n pass ");
    }
    else
    {
        printf(" \n fail");
        
    }
    
    getch();
}