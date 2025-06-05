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
    
    
    if(a == userid && b == userpass)
    {
        printf("\n Login Success ");
    }
    else
    {
        printf("\nyour invalid");
    }
    
    getch();
}