#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b;
    
    printf("Enter a value :");
    scanf("%d",&a);
    
    printf("Enter a value :");
    scanf("%d",&b);
    
    a-=b;
    
    printf("\n %d",a);
    
    getch();
}
