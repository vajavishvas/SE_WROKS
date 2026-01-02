#include <stdio.h>

int main() 
{
    int num, a = 0, b = 1,f;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Fibonacci series up to %d:\n", num);

    while (a <= num) 
    {
        printf("%d  \n ", a);
        f = a + b;
        a = b;
        b = f;
    }

    return 0;
}
