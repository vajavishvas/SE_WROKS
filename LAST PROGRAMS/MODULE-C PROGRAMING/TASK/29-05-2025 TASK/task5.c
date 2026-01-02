#include<stdio.h>
#include<conio.h>
void main()
{
    float base,hieght,area;
    //float PI=3.14;
    
    printf("Enter triangle base:");
    scanf("%f",&base);
    
    printf("Enter triangle hieghrt:");
    scanf("%f",&hieght);
    
    area = (base*hieght) / 2 ;
    
    printf("Area of triangle is %f",area);
    
    
    getch();
}
