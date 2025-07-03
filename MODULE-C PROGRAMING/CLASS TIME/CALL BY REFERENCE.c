#include<stdio.h>
#include<conio.h>
 void multipficetion (int a , int b,int *d)
 {
    *d = a*b ;
 }
 void main()
 {
     int x,y,z;
     x =9;
     y =7;
     
     multipficetion (x,y,&z);
      printf("\n before value  : %d ",z);
      
    getch();   
 }
 
 