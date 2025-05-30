#include<stdio.h>
#include<conio.h>
void main()
{
    float percentage,total,gj,eng,co,acc,eco;
    
    printf("\n Enter of GJ :");
    scanf("%f",&gj);
    
    printf("\n Enter of ENG :");
    scanf("%f",&eng);
    
    printf("\n Enter of CO :");
    scanf("%f",&co);
    
    printf("\n Enter of ACC :");
    scanf("%f",&acc);
    
    printf("\n Enter of ECO:");
    scanf("%f",&eco); 
    
    
    total = gj + eng + co + acc + eco;
    percentage = total/5;
    
    printf("\n total marks : %f",total);
    printf("\n percentage : %f ",percentage);
    
    
    getch();
}