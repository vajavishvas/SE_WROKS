//Determine if a character isABO a vowel or consonant.

#include<stdio.h>
#include<conio.h>
void main()
{
    char alpha;
    printf("Enter a character ");
    scanf("%c",&alpha);
    
    printf("\n");
    
    if (alpha == 'A' || alpha == 'E' || alpha == 'I' || alpha == 'O' || alpha == 'U')
    {
        printf(" %c Your character is vowel \n ",alpha);
    }
    else if (alpha == 'a' || alpha == 'e' || alpha == 'i' || alpha == 'o' || alpha == 'u')
    {
        printf(" %c Your character is vowel \n ",alpha);
    }
    else if ((alpha >= 'A' && alpha <= 'Z') || (alpha >= 'a' && alpha <= 'z'))
    {
        printf("%c Your character is consonant \n",alpha);
    }
    else
    {
        printf(" %c it's not alphabet \n ",alpha);
    }
    
    getch();
}