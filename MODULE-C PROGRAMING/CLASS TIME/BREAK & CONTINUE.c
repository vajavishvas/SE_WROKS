// break & continue 

#include<stdio.h>
#include<conio.h>
void main()
{
    int i;
    
    for(i=1;i<=10;i++)
    {
        if(i==5)
        {
            //break;
            continue;
            
        }
         printf("%d",i);
    }
   

    getch();
}
