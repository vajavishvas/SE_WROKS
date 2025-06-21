
/*Write a program of to find out the area of Triangle, Rectangle and Circle
using If Condition.(Must Be Menu Driven)*/

#include <stdio.h>
#include <conio.h>

void main()
{
    int c;
    float area,base,height,length,width,r;
    
    printf("\n1.Area of Triangle\n");
	printf("\n2.Area of Rectangle\n");
	printf("\n3.Area of Circle\n");
	
    printf("\n please selected in 1 to 3 number : ");
    scanf("%d",&c);
    
    switch(c)
    {
        //Triangle
        case 1:
        printf("enter a base of Triangle : ");
        scanf("%f",&base);
        printf("enter a height of Triangle : ");
        scanf("%f",&height);
        area = 0.5 * base * height;
        printf("your area of Triangle :%f",area);
        break;
        
        
        //Rectangle
        case 2:
        printf("enter a length of Rectangle : ");
        scanf("%f",&length);
        printf("enter a width of Rectangle : ");
        scanf("%f",&width);
        area = length * width;
        printf("your area of Rectangle :%f",area);
        break;
        
        
        //Circle
        case 3:
        printf("enter a radius of Circle : ");
        scanf("%f",&r);
        area = 3.14 * r *r ;
        printf("your area of Circle :%f",r);
        break;
        
    }
	getch();
}