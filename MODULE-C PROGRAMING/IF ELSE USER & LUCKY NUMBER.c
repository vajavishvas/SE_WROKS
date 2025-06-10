#include<stdio.h>
#include<conio.h>
void main()
{
    int usernunm, luckynum = 7;

    printf("\n Enter Your Number between 1 to 10 =\t");
    scanf("%d",&usernunm);
    
    if (luckynum == usernunm)
    {
        printf("\n Your are Winner ");
    }
    else
    {
        printf("\n Your are looser ");
    }
    
    getch();
}