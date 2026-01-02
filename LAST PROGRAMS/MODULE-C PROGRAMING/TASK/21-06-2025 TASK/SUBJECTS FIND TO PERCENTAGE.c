// Get value for diffrent subjects and find the percentage.

#include<stdio.h>
#include<conio.h>
void main()
{
    int marks[7],i;
    char subject[7][20] = {"GUJ","ENG","ECO","HINDI","STATE","ACC","SP"};
    float total,avg;
    
    for (i=0;i<7;i++)
    {
        printf("\n Enter your marks subject wise : %s : ",subject[i]);
        scanf("%d",&marks[i]);
        
        total += marks[i];
    }
    avg = total / 7;
    
    printf(" \n Your total marks is %f",total);
    
    printf(" \n Your percentage is: %f",avg);
    
    getch();
}