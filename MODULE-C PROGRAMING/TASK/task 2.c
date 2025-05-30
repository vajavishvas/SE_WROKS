#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b;
    int add,sub,mul,division;
    
    printf(" enter value a: ");
    scanf("%d",&a);
    
    printf(" enter value b: ");
    scanf("%d",&b);
    
    add = a + b;
    printf(" \n Addition of %d and %d  is %d",a,b,add);
    
    sub = a - b;
    printf("\n Substraction of %d and %d  is %d",a,b,sub);
    
    mul = a * b;
    printf("\n Multiplication of %d and %d  is %d",a,b,mul);
    
    division = a/b;
    printf("\n Division of %d and %d  is %d",a,b,division);
    
    
    
    getch();
}