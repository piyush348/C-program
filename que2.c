#include <stdio.h>
#include <conio.h>
int main()
{
    float a, b, c;
    printf("Enter a :");
    scanf("%f", &a);
    printf("Enter b :");
    scanf("%f", &b);
    printf("Enter c :");
    scanf("%f", &c);
    if (a > b)
    {
        if (a > c)
        {
            printf("a is the greatest number");
        }
    }
    else if (b > a && b > c)
    {
        printf("b is greatest number");
    }
    else
    {
        printf("c is the greatest number");
    }
    return 0;
}