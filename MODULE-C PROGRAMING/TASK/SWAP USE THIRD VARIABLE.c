/* Swap two numbers using third variable */
#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c;
    printf("Enter three integers : ");
    scanf("%d",&a);
    
    printf("Enter three integers : ");
    scanf("%d",&b);
    
    c = a;
    a = b;
    b = c;
    
    printf("\n \n");
    printf("Swaping number : %d %d ",a,b);
    
    
    getch();
}
