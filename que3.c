#include <stdio.h>
#include <conio.h>
int main()
{
    int a;
    printf("Enter the number a :");
    scanf("%d", &a);
    if (a % 2 == 0)
    {
        printf("The given number is even");
    }
    else
    {
        printf("The given number is odd");
    }
    return 0;
}