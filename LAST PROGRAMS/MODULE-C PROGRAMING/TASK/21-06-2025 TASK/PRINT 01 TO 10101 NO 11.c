// 1
// 01
// 101
// 1010
// 10101

#include<stdio.h>
#include<conio.h>

void main() 
{
    int i, j, num;
    
    
    for(i = 1; i <= 5; i++) 
    {           
        num = 1;
        for(j = 1; j <= i; j++) 
        {       
            printf("%d ", num);       
            num = 1 - num;                  
        }
        printf("\n");                 
    }

    getch();
}
