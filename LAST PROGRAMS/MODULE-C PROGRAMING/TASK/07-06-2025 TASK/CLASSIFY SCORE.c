// Classify a score into grades A, B, C, D, or F
#include<stdio.h>
#include<conio.h>
void main()
{
    int score;
    
    printf("Enter your score in to the (0 - 100) :"); 
    scanf("%d",&score);
    
    printf("\n ");
    
    if (score >= 90)
    {
        printf("A grade");
    }
    else if(score >= 70)
    {
        printf("B grade");
    }
    else if(score >= 50)
    {
        printf("C grade");
    }
    else if(score >= 30)
    {
        printf("D grade");
    }
    else if(score >= 20)
    {
        printf("F grade");
    }
    else
    {
        printf("Your fail");
    }
    
    
    getch();
}