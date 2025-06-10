/* Assign bonus to employees based on years of service.*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int year;
    float salary, a;
    
    printf("Enter Your salary :");
    scanf("%f",&salary);
    
    printf("Enter Your year :");
    scanf("%d",&year);
    
    if(year>=5)
    {
        a = 20000;
    }
    else if(year>=3)
    {
        a = 10000;
    }
    else if(year>=1)
    {
        a = 5000;
    }
    else
    {
        a = 2000;
    }
     
    float bonus = salary + a;
    
    printf(" \n Your selected for bonus %f",a);
    printf(" \n Total amount %f",bonus);
    
    

    getch();
}