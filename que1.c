#include <stdio.h>
#include <conio.h>
int main()
{
    int a, b;
    printf("Enter a = ");
    scanf("%d", &a);
    printf("Enter b = ");
    scanf("%d", &b);
    if (a == b)
    {
        printf("Both the numbers are equall");
    }
    else
    {
        printf("Both are not equall");
    }
    return 0;
}