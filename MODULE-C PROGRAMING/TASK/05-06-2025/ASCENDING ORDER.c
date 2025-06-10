#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c;
    printf("Enter three integers : ");
    scanf("%d",&a);
    
    printf("Enter three integers : ");
    scanf("%d",&b);
    
    printf("Enter three integers : ");
    scanf("%d",&c);
    
    printf("\n");
    
    if(a <= b)
    {
        if(a <= c)
        {
            if(b <= c)
            {
                printf("Ascending order : %d %d %d",a,b,c);
            }
            else
            {
                printf("Ascending order : %d %d %d",a,c,b);
            }
        }
        else
        {
            printf("Ascending order : %d %d %d",c,a,b);
        }
    }
    else
    {
        if(b <= c)
        {
            if(a <= c)
            {
                printf("Ascending order : %d %d %d",b,a,c);
            }
            else
            {
                printf("Ascending order : %d %d %d",b,c,a);
            }
        }
        else
        {
            printf("Ascending order : %d %d %d",c,b,a);
        }
    }
    
    
    getch();
}
