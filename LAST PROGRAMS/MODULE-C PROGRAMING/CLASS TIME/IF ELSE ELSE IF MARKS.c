#include<stdio.h>
#include<conio.h>
void main()
{
   int marks;
   
   printf("\n Enter your marks : ");
   scanf("%d",&marks);
   
   if(marks>60)
   {
       printf("\n A grad");
   }
   else if(marks>50)
   {
       printf("\n B grad");
   }
    else if(marks>40)
   {
       printf("\n C grad");
   }
   else if(marks>30)
   {
       printf("\n D grad");
   }
   else
   {
       printf("\n Your Fail");
    }
    getch();
}