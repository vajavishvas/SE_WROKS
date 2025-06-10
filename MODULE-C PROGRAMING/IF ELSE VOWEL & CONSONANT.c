#include<stdio.h>
#include<conio.h>
void main()
{
    char alpha;
    
    printf("\n Enter your alphabet :");
    scanf("%c",&alpha);
    
    if(alpha == 'a' || alpha == 'e' || alpha == 'i' || alpha == 'o' || alpha == 'u')
    {
        printf("\n It's a vowel");
    }
    else
    {
        printf("\n It's a consonant");
    }
    getch();
}
