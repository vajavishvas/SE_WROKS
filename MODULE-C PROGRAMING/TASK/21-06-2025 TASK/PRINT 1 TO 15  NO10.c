// 1
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15

#include<stdio.h>
#include<conio.h>

void main() 
{
    int i, j, num = 1,no;
    printf("\n ENTER ANY NUMBER :");
    scanf("%d",&no);

    for(i = 1; i <= no; i++) 
    {           
        for(j = 1; j <= i; j++) 
        {       
            printf("%d ", num);       
            num++;       // number are ++ num=1 and 1++=2...              
        }
        printf("\n");                 
    }

    getch();
}
