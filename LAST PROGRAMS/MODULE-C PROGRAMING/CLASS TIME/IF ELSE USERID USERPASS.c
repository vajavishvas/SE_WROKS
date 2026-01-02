#include<stdio.h>
#include<conio.h>
void main()
{
    int userpass = 1234,b;
    char userid = 'v',a;

    
    printf("Enter Your user id :");
    scanf("%c",&a);
    
    printf("Enter Your user pass :");
    scanf("%d",&b);
    
    
    if(a == userid)
    {
        printf("\n your userid is right ");
    }
    if(b == userpass)
    {
        printf("\n your userpass is right");
    }
    else
    {
        printf("\n your invalid");
    }
}