#include<stdio.h>
int main() 
{
    printf("vishu \t");
    
    printf("%c", '0' + 'v'/'v' + 'i'/'i' + 's'/'s' + 'h'/'h' + 'u'/'u' ); 
    
    // 'v'/'v' = 1, 'e'/'e' = 1, 'd'/'d' = 1 → 1+1+1=3 → '0'+3 = '3'
    
    getch();
}
