// Get the userinput in array and findout the maximum number from given 

#include<stdio.h>
#include<conio.h>
void main()
{
    int a,i,num[100];
    int max;
    
    printf("Enter your number elements :");
    scanf("%d",&a);
    
    for(i=0;i<a;i++)
    {
        printf("\n Enter number %d :", i + 1);
        scanf("%d",&num[i]);
    }
    
    max = num [0];
    
    for(i=1;i<a;i++)
    {
        if(num[i]>max)
        {
            max = num[i];
        }
    }
    printf(" \n\n max number is : %d ",max);
    getch();
}