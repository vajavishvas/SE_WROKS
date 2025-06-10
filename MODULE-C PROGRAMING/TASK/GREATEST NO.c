/* Find the greatest among three numbers using nested if */

#include<stdio.h>
#include<conio.h>
int main() {
    int a, b, c;

    
    printf("Enter frist numbers: ");
    scanf("%d",&a);
    
    printf("Enter second numbers: ");
    scanf("%d",&b);
    
    printf("Enter third numbers: ");
    scanf("%d",&c);
    
    printf("\n");
    
    if (a>b)
    {
        if(a>c)
        {
            printf("Greatest number : %d",a);
        }
        else
        {
            printf("Greatest number : %d",c);
        }
    }
    else
    {
        if(b>c)
        {
            printf("Greatest number : %d",b);
        }
        else
        {
            printf("Greatest number : %d",c);
        }
    }

    getch();
}
