// 1 
// 4 4 
// 9 9 9
// 16 16 16 16
// 25 25 25 25 25 
#include<stdio.h>
#include<conio.h>

void main() 
{
    int i, j, num;
    
    
    for(i = 1; i <= 5; i++) 
    {           
        num = i * i;
        for(j = 1; j <= i; j++) 
        {       
            printf("%d ", num);       
        }
        printf("\n");                 
    }

    getch();
}
