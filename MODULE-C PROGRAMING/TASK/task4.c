#include<stdio.h>
#include<conio.h>
void main()
{
    float radius,area;
    float PI=3.14;
    
    printf("Enter Radius: ");
    scanf("%f",&radius);
    
    area = PI*radius*radius;
    
    printf("Area of Circle is %f",area);
    
    
    getch();
}