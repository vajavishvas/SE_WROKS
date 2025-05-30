#include<stdio.h>// header file
#include<conio.h>// header file
void main()//main function
{
    int num1 = 45;
    int num2 = 65;
    int add,sub,mul,division;
    
    
    add = num1+num2;
    printf("\n ADDITION of %d and %d is %d",num1,num2,add);
    
    sub = num1-num2;
    printf("\n SUBSTRACTION of %d and %d is %d",num1,num2,sub);
    
    mul = num1*num2;
    printf("\n MULTIPLICATION of %d and %d is %d",num1,num2,mul);
    
    division = num1/num2;
    printf("\n DIVISION of %d and %d is %d",num1,num2,division);
    
    
	getch();// terminate your prongram
}