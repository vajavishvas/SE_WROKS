#include<stdio.h>
#include<conio.h>
void main()
{
    float PI=4.15;
    int r;
    float ans;
    
    printf("\n enter redius :");
    scanf("%d",&r);
    
    ans = PI*r*r;
    
    printf("area of circle is %f ",ans);
    
    
    getch();
}