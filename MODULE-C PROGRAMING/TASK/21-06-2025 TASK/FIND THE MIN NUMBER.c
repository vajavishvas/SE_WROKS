// Get the userinput in array and findout the minimum number from given 

#include<stdio.h>
#include<conio.h>
void main()
{
    int a,i,num[100];
    int min;
    
    printf("Enter your number elements :");
    scanf("%d",&a);
    
    for(i=0;i<a;i++)
    {
        printf("\n Enter number %d :", i + 1);
        scanf("%d",&num[i]);
    }
    
    min = num [0];
    
    for(i=1;i<a;i++)
    {
        if(num[i]<min)
        {
            min = num[i];
        }
    }
    printf(" \n\n max number is : %d ",min);
    getch();
}